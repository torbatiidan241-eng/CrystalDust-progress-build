# 0 "string/strncat.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "string/strncat.c"
# 45 "string/strncat.c"
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
# 46 "string/strncat.c" 2
# 1 "../ginclude/limits.h" 1
# 47 "string/strncat.c" 2
# 67 "string/strncat.c"
char *
strncat(char *s1 , const char *s2 , size_t n)



{
# 86 "string/strncat.c"
  char *s = s1;


  if ((((long)s1 & (sizeof (long) - 1)) == 0))
    {
      unsigned long *aligned_s1 = (unsigned long *)s1;
      while (!(((*aligned_s1) - 0x01010101) & ~(*aligned_s1) & 0x80808080))
 aligned_s1++;

      s1 = (char *)aligned_s1;
    }

  while (*s1)
    s1++;







  while (n-- != 0 && (*s1++ = *s2++))
    {
      if (n == 0)
 *s1 = '\0';
    }

  return s;

}
