# 0 "arm/libcfunc.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "arm/libcfunc.c"







# 1 "arm/swi.h" 1
# 9 "arm/libcfunc.c" 2



static inline int
do_AngelSWI (int reason, void * arg)
{
  int value;
  asm volatile ("mov r0, %1; mov r1, %2; swi %a3; mov %0, r0"
       : "=r" (value)
       : "r" (reason), "r" (arg), "i" ((0xAB))
       : "r0", "r1", "lr"
                                                        );
  return value;
}



void
abort (void)
{

  do_AngelSWI ((0x18),
       (void *) ((2 << 16) + 34));



}

isatty (int fd)
{
  return 1;
}

void
alarm (void)
{
}
