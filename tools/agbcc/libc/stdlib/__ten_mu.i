# 0 "stdlib/__ten_mu.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "stdlib/__ten_mu.c"







# 1 "include/_ansi.h" 1
# 15 "include/_ansi.h"
# 1 "include/sys/config.h" 1
# 103 "include/sys/config.h"
typedef int __int32_t;
typedef unsigned int __uint32_t;
# 16 "include/_ansi.h" 2
# 9 "stdlib/__ten_mu.c" 2

int
__ten_mul(double *acc , int digit)


{




  *acc *= 10;
  *acc += digit;

  return 0;
}
