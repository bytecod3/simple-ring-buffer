# simple-ring-buffer
Simple ring buffer for use with microcontrollers

### Usage
To copy the bare code, use the code in ```bare-code``` folder

The ```microchip-studio-code``` folder contians the code implemented using Microchip studio for debugging purpose

### Interface implemented
The following interface functions are implemented in this code:
```c

void ring_buffer_init(ring_buffer*);
void ring_buffer_put(ring_buffer*, int);
int ring_buffer_get(ring_buffer* r);
uint8_t ring_buffer_available(ring_buffer* r);
uint8_t ring_buffer_full(ring_buffer* r);
uint8_t ring_buffer_empty(ring_buffer* r);
void ring_buffer_flush(ring_buffer* r);

```
