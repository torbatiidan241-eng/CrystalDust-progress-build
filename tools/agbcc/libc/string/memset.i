# 0 "string/memset.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "string/memset.c"
# 36 "string/memset.c"
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
# 37 "string/memset.c" 2





void *
memset(void * m , int c , size_t n)



{
# 58 "string/memset.c"
  char *s = (char *) m;
  int count, i;
  unsigned long buffer;
  unsigned long *aligned_addr;
  unsigned char *unaligned_addr;

  if (!((n) < (sizeof(long))) && !((long)m & ((sizeof(long)) - 1)))
    {


      aligned_addr = (unsigned long*)m;



      c &= 0xff;
      if ((sizeof(long)) == 4)
        {
          buffer = (c << 8) | c;
          buffer |= (buffer << 16);
        }
      else
        {
          buffer = 0;
          for (i = 0; i < (sizeof(long)); i++)
     buffer = (buffer << 8) | c;
        }

      while (n >= (sizeof(long))*4)
        {
          *aligned_addr++ = buffer;
          *aligned_addr++ = buffer;
          *aligned_addr++ = buffer;
          *aligned_addr++ = buffer;
          n -= 4*(sizeof(long));
        }

      while (n >= (sizeof(long)))
        {
          *aligned_addr++ = buffer;
          n -= (sizeof(long));
        }

      s = (char*)aligned_addr;
    }

  while (n--)
    {
      *s++ = (char)c;
    }

  return m;

}
