# 0 "stdlib/__exp10.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "stdlib/__exp10.c"




# 1 "include/_ansi.h" 1
# 15 "include/_ansi.h"
# 1 "include/sys/config.h" 1
# 103 "include/sys/config.h"
typedef int __int32_t;
typedef unsigned int __uint32_t;
# 16 "include/_ansi.h" 2
# 6 "stdlib/__exp10.c" 2

double
__exp10(unsigned x)

{
  static const double powtab[] =
  {1.0,
   10.0,
   100.0,
   1000.0,
   10000.0};

  if (x < (sizeof (powtab) / sizeof (double)))
      return powtab[x];
  else if (x & 1)
    {
      return 10.0 * __exp10 (x - 1);
    }
  else
    {
      double n = __exp10 (x / 2);
      return n * n;
    }
}
