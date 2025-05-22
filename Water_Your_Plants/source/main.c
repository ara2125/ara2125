//adc library & driver references
#include "fsl_debug_console.h"
#include "board.h"
#include "fsl_adc16.h"
#include "pin_mux.h"
#include "clock_config.h"

//references to other files in project & board info
#include <MKL46Z4.h>
#include "utils.h"

//lcd library & driver references
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "board.h"
#include "fsl_common.h"
#include "fsl_slcd.h"

//include for lcd
#include "lcd.h"

//global variables for ADC
#define ADC16_BASEADDR ADC0
#define ADC16_CHANNEL_GROUP 0U
#define ADC16_USER_CHANNEL 0U /* PTE20, ADC0_SE0 */
#define ADC16_IRQn ADC0_IRQn
#define ADC16_IRQ_HANDLER_FUNC ADC0_IRQHandler

adc16_channel_config_t g_adc16ChannelConfigStruct;
bool g_Adc16ConversionDoneFlag = false;
uint32_t g_Adc16ConversionValue;

//keeping track of the amount of data collected and when there
//have been a lot of repeat in one color led
int countInterrupt = 0;
int redOn = 0;
int greenOn = 0;

//analog to digital converter initialization

void ADC_Init(void)
{
     adc16_config_t adc16ConfigStruct;

     /* Configure the ADC16. to default parameters */
    ADC16_GetDefaultConfig(&adc16ConfigStruct);
    //change resolution to 10 bits since that is what is expected for sensor
    adc16ConfigStruct.resolution = kADC16_ResolutionSE10Bit;
    ADC16_Init(ADC16_BASEADDR, &adc16ConfigStruct);

    /* Make sure the software trigger is used. */
    ADC16_EnableHardwareTrigger(ADC16_BASEADDR, false);

    /* Prepare ADC channel setting */
    g_adc16ChannelConfigStruct.channelNumber = ADC16_USER_CHANNEL;
    g_adc16ChannelConfigStruct.enableInterruptOnConversionCompleted = true; /*!< Generate an interrupt request once the conversion is completed. */
    //disable differential conversion because we have single-ended input
    g_adc16ChannelConfigStruct.enableDifferentialConversion = false;
}

//ADC interrupt handler so that there can be an interrupt when the ADC finishes changing analog to digital
void ADC16_IRQ_HANDLER_FUNC(void)
{
    g_Adc16ConversionDoneFlag = true;
    /* Read conversion result to clear the conversion completed flag. */
    g_Adc16ConversionValue = ADC16_GetChannelConversionValue(ADC16_BASEADDR, ADC16_CHANNEL_GROUP);
}

int main(void)
{
	//initialize hardware for LCD and ADC modules
    BOARD_InitPins();
    BOARD_BootClockRUN();
    BOARD_InitDebugConsole();
    EnableIRQ(ADC16_IRQn);

    //initialize adc
    ADC_Init();

	// Initialize LEDs and set them to off when starting the connection.
	LED_Initialize();
	LED_Off();

	//initializes lcd
	init_lcd();

	// Infinite loop to allow readings approximately every second.
	while (1){
		g_Adc16ConversionDoneFlag = false;
		//gets the analog soil moisture value
		ADC16_SetChannelConfig(ADC16_BASEADDR, ADC16_CHANNEL_GROUP, &g_adc16ChannelConfigStruct);
		while (!g_Adc16ConversionDoneFlag)
		{
		};
		//reset LEDs
		LED_Off();

		//display analog output value on the LCD
	    int temp = g_Adc16ConversionValue;
	    int r=0;
	    int j=0;
	    //four digits needed
	    for(j=0; j<4; j++){
	    	//extract the lowest digit
	    	r=temp%10;
	    	//display it on the lowest digit on the LCD not used
	    	displayDigit(4-j, r);
	    	//adjust the value
	    	temp=temp/10;
	    }

		// when soil isn't dry but on range from damp to wet
	    if (g_Adc16ConversionValue<900) {
			redOn=0;
			greenOn++;
			LEDGreen_On();
			//not fully saturated with water but soil is wet so need to water more until full saturation
			if(g_Adc16ConversionValue>350){
				int i = g_Adc16ConversionValue;
				//toggle green led to show how much more you should water
				//toggle once for every "100" away from 350 (fully saturated)
				//more it flashes, the more you should water
				for (i=0; i<350;i=i-100){
					LEDGreen_Toggle();
					delay();
					LEDGreen_Toggle();
					delay();
				}
			}
	   }
		else {
			//soil is too dry so flash red LED
			LEDRed_On();
			redOn++;
			greenOn = 0;
			// Condition for when the red LED has been on for too long, indicating that the plant needs water more urgently
			if(redOn>5){
				int i=0;
				for (i=0; i<redOn;i++){
					LEDRed_Toggle();
					delay();
					LEDRed_Toggle();
					delay();
				}
			}
		}
	    delay(); delay(); delay(); delay();
	}
}




