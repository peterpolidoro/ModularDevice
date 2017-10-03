// ----------------------------------------------------------------------------
// 5x3.h
//
//
// Authors:
// Peter Polidoro polidorop@janelia.hhmi.org
// ----------------------------------------------------------------------------
#ifndef MODULAR_DEVICE_BASE_5X3_CONSTANTS_H
#define MODULAR_DEVICE_BASE_5X3_CONSTANTS_H
#include "Constants.h"


#if defined(__MK64FX512__)

namespace modular_device_base
{
namespace constants
{
//MAX values must be >= 1, >= created/copied count, < RAM limit
enum{PROCESSOR_INTERRUPT_COUNT_MAX=1};
enum{INTERRUPT_COUNT_MAX=4};

enum{SERIAL_STREAM_COUNT=4};
enum{CLIENT_STREAM_COUNT=SERIAL_STREAM_COUNT};

extern HardwareSerial * serial_stream_ptrs[SERIAL_STREAM_COUNT];
extern const size_t serial_rx_pins[SERIAL_STREAM_COUNT];

extern const size_t client_stream_ids[CLIENT_STREAM_COUNT];

extern ConstantString serial1_name;
extern ConstantString serial2_name;
extern ConstantString serial3_name;
extern ConstantString serial4_name;
extern const ConstantString * const client_stream_name_ptrs[CLIENT_STREAM_COUNT];

extern const size_t led_green_pin;
extern const size_t led_yellow_pin;

// Interrupts
extern ConstantString bnc_a_interrupt_name;
extern const size_t bnc_a_pin;

extern ConstantString bnc_b_interrupt_name;
extern const size_t bnc_b_pin;

extern ConstantString btn_a_interrupt_name;
extern const size_t btn_a_pin;

extern ConstantString btn_b_interrupt_name;
extern const size_t btn_b_pin;

// Units

// Properties
// Property values must be long, double, bool, long[], double[], bool[], char[], ConstantString *, (ConstantString *)[]

// Parameters

// Functions

// Callbacks

// Errors
}
}

#elif defined(__AVR_ATmega2560__)

namespace modular_device_base
{
namespace constants
{
enum{PROCESSOR_INTERRUPT_COUNT_MAX=1};
enum{INTERRUPT_COUNT_MAX=1};

enum{SERIAL_STREAM_COUNT=1};
enum{CLIENT_STREAM_COUNT=SERIAL_STREAM_COUNT};

extern HardwareSerial * serial_stream_ptrs[SERIAL_STREAM_COUNT];

extern const size_t client_stream_ids[CLIENT_STREAM_COUNT];

extern ConstantString serial2_name;
extern const ConstantString * const client_stream_name_ptrs[CLIENT_STREAM_COUNT];

// Units

// Properties
// Property values must be long, double, bool, long[], double[], bool[], char[], ConstantString *

// Parameters

// Functions

// Callbacks

// Errors
}
}
#endif
#endif