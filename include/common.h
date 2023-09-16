/* Copyright (C) 2023 Harry Clark */

/* Mario Kart Wii Discord Rich Presence */

/* THIS FILE IS ABOUT COMMON DATA TYPES USED THROUGHOUT THE PROJECT */
/* CREATING TYPE DEFINED METHODS TO INSTANTIATE RAW POINTERS FOR MY */
/* METHODS, FUNCTIONS, ETC */

#ifndef COMMON
#define COMMON

#include <cstdint>
#include <stdio.h>

#ifndef UNSIGNED_TYPES
#define UNSIGNED_TYPES

typedef uint8_t U8;
typedef uint16_t U16;
typedef uint32_t U32;
typedef uint64_t U64;
typedef size_t UNK;

#endif 

#ifndef SIGNED_TYPES
#define SIGNED_TYPES

typedef int8_t S8;
typedef int16_t S16;
typedef int32_t S32;
typedef int64_t S64;

#endif

#ifndef FLOATING_POINT
#define FLOATING_POINT

typedef float F32;
typedef double F64;
typedef volatile float VF32;
typedef volatile double VF64;

#endif

#ifndef COMPILER
#define COMPILER

#define VOID_FUNCTION(NAME) void NAME()

#ifndef DECLSPEC
#define DECLSPEC __declspec(dllexport)
#else
#define DECLSPEC __declspec(dllimport)
#endif

#ifdef __cplusplus
extern "C"
{}
#endif


#ifndef REVO_CALL
#if defined(_WIN32_LEAN_AND_MEAN)
#define REVO_CALL __cdecl
#else
#define REVO_CALL
#endif

#endif
#endif
#endif
