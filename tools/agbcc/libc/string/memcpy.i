# 0 "string/memcpy.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "string/memcpy.c"
# 35 "string/memcpy.c"
# 1 "include/_ansi.h" 1
# 15 "include/_ansi.h"
# 1 "include/sys/config.h" 1
# 103 "include/sys/config.h"
typedef int __int32_t;
typedef unsigned int __uint32_t;
# 16 "include/_ansi.h" 2
# 36 "string/memcpy.c" 2
# 1 "../ginclude/stddef.h" 1





typedef long int ptrdiff_t;



typedef unsigned long int size_t;






typedef int wchar_t;
# 37 "string/memcpy.c" 2
# 1 "../ginclude/limits.h" 1
# 38 "string/memcpy.c" 2
# 52 "string/memcpy.c"
void *
memcpy(void * dst0 , const void * src0 , size_t len0)



{
# 71 "string/memcpy.c"
  char *dst = dst0;
  const char *src = src0;
  long *aligned_dst;
  const long *aligned_src;
  int len = len0;



  if (!((len) < (sizeof (long) << 2)) && !(((long)src & (sizeof (long) - 1)) | ((long)dst & (sizeof (long) - 1))))
    {
      aligned_dst = (long*)dst;
      aligned_src = (long*)src;


      while (len >= (sizeof (long) << 2))
        {
          *aligned_dst++ = *aligned_src++;
          *aligned_dst++ = *aligned_src++;
          *aligned_dst++ = *aligned_src++;
          *aligned_dst++ = *aligned_src++;
          len -= (sizeof (long) << 2);
        }


      while (len >= (sizeof (long)))
        {
          *aligned_dst++ = *aligned_src++;
          len -= (sizeof (long));
        }


      dst = (char*)aligned_dst;
      src = (char*)aligned_src;
    }

  while (len--)
    *dst++ = *src++;

  return dst0;

}
