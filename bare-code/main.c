/*
 * ring_buffer.c
 *
 * Created: 12/8/2024 10:41:07 PM
 * Author : PC
 */ 

#include <avr/io.h>
#include "ring_buffer.h"


int main(void)
{
	
	ring_buffer test_buffer;
	volatile int read_data = 0;
	volatile uint8_t available = 255;
	
	ring_buffer_init(&test_buffer);
	available = ring_buffer_available(&test_buffer);
	ring_buffer_put(&test_buffer, 10);
	available = ring_buffer_available(&test_buffer);
	ring_buffer_put(&test_buffer, 7);
	available = ring_buffer_available(&test_buffer);
	read_data = ring_buffer_get(&test_buffer);
	available = ring_buffer_available(&test_buffer);
	ring_buffer_put(&test_buffer, 45);
	available = ring_buffer_available(&test_buffer);	
	
    while (1) 
    {
		ring_buffer_put(&test_buffer, 10);
    }
}

