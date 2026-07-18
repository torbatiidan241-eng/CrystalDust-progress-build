#ifndef FORCE_TYPES_H
#define FORCE_TYPES_H

typedef unsigned int u32;
typedef int s32;
typedef volatile unsigned int vu32;
typedef volatile int vs32;

// Force 64-bit types to be 32-bit so agbcc doesn't crash
#define u64 u32
#define s64 s32
#define vu64 vu32
#define vs64 vs32

#endif