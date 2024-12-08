/*
 * ring_buffer.h
 *
 * Created: 12/8/2024 10:43:22 PM
 *  Author: PC
 */ 

#ifndef RING_BUFFER_H
#define RING_BUFFER_H
#include <stdint.h>

#define SIZE_OF_BUFFER 100

typedef struct {
	int buffer[SIZE_OF_BUFFER];
	uint8_t write_index;
	uint8_t read_index;
	uint8_t buffer_length;
	
} ring_buffer;

void ring_buffer_init(ring_buffer*);
void ring_buffer_put(ring_buffer*, int);
int ring_buffer_get(ring_buffer* r);
uint8_t ring_buffer_available(ring_buffer* r);
uint8_t ring_buffer_full(ring_buffer* r);
uint8_t ring_buffer_empty(ring_buffer* r);
void ring_buffer_flush(ring_buffer* r);

#endif