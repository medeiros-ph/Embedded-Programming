#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/portmacro"
#include "freertos/task.h"
#include "freertos/queue.h"
#include "driver/periph_ctrl.h"
#include "driver/ledc.h"
#include "driver/gpio.h"
#include "driver/pcnt.h"
#include "esp_attr.h"
#include "esp_log.h"

#define PCNT_TEST_UNIT	PCNT_UNIT_0
#define PCNT_H_LIM_VAL	1000
#define PCNT_L_LIM_VAL	-1000
#define PCNT_THRESH1_VAL	500
#define PCNT_THRESH0_VAL -500
#define PCNT_INPUT_SIG_IO	4 //Pulse input GPIO
#define PCNT_INPUT_CTRL_IO	5 //Control GPIO vcc=up, GND=down
#define LEDC_OUTPUT_IO	18 //Output GPIO of a sample 1Hz pulse gen.

xQueueHandler pcnt_evt_queue;
pcnt_isr_handle_t user_isr_handle = NULL;

typedef struct{
	int unit; //the PCNT unit that originated an interrupt
	uint32_t status; // info on the event type that caused the interrupt
} pcnt_evt_t;

static void IRAM_ATTR pcnt_example_intr_handler(void *arg){
	uint32_t intr_status = PCNT.int_st.val;
	int i;
	pcnt_evt_t evt;
	portBASE_TYPE HPTaskAwoken = pdFALSE;

	for (i=0; i < PCNT_UNIT_MAX; i++){
		if (intr_status & (BIT(i))){
			evt.status = i;
		}
	} 
}
