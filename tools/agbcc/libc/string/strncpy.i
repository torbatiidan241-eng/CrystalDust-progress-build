# 0 "string/strncpy.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "string/strncpy.c"
# 40 "string/strncpy.c"
# 1 "include/string.h" 1
# 14 "include/string.h"
# 1 "include/_ansi.h" 1
# 15 "include/_ansi.h"
# 1 "include/sys/config.h" 1
# 103 "include/sys/config.h"
typedef int __int32_t;
typedef unsigned int __uint32_t;
# 16 "include/_ansi.h" 2
# 15 "include/string.h" 2


# 1 "../ginclude/stddef.h" 1





typedef long int ptrdiff_t;



typedef unsigned long int size_t;






typedef int wchar_t;
# 18 "include/string.h" 2





void * memchr (const void *, int, size_t);
int memcmp (const void *, const void *, size_t);
void * memcpy (void *, const void *, size_t);
void * memmove (void *, const void *, size_t);
void * memset (void *, int, size_t);
char *strcat (char *, const char *);
char *strchr (const char *, int);
int strcmp (const char *, const char *);
int strcoll (const char *, const char *);
char *strcpy (char *, const char *);
size_t strcspn (const char *, const char *);
char *strerror (int);
size_t strlen (const char *);
char *strncat (char *, const char *, size_t);
int strncmp (const char *, const char *, size_t);
char *strncpy (char *, const char *, size_t);
char *strpbrk (const char *, const char *);
char *strrchr (const char *, int);
size_t strspn (const char *, const char *);
char *strstr (const char *, const char *);


char *strtok (char *, const char *);


size_t strxfrm (char *, const char *, size_t);


char *strtok_r (char *, const char *, char **);

int bcmp (const char *, const char *, size_t);
void bcopy (const char *, char *, size_t);
void bzero (char *, size_t);
int ffs (int);
char *index (const char *, int);
void * memccpy (void *, const void *, int, size_t);
char *rindex (const char *, int);
int strcasecmp (const char *, const char *);
char *strdup (const char *);
int strncasecmp (const char *, const char *, size_t);
char *strsep (char **, const char *);
char *strlwr (char *);
char *strupr (char *);
# 41 "string/strncpy.c" 2
# 1 "../ginclude/limits.h" 1
# 42 "string/strncpy.c" 2
# 67 "string/strncpy.c"
char *
strncpy(char *dst0 , const char *src0 , size_t count)



{
# 90 "string/strncpy.c"
  char *dst = dst0;
  const char *src = src0;
  long *aligned_dst;
  const long *aligned_src;


  if (!(((long)src & (sizeof (long) - 1)) | ((long)dst & (sizeof (long) - 1))) && !((count) < sizeof (long)))
    {
      aligned_dst = (long*)dst;
      aligned_src = (long*)src;



      while (count >= sizeof (long int) && !(((*aligned_src) - 0x01010101) & ~(*aligned_src) & 0x80808080))
 {
   count -= sizeof (long int);
   *aligned_dst++ = *aligned_src++;
 }

      dst = (char*)aligned_dst;
      src = (char*)aligned_src;
    }

  while (count > 0)
    {
      --count;
      if ((*dst++ = *src++) == '\0')
 break;
    }

  while (count-- > 0)
    *dst++ = '\0';

  return dst0;

}
