# 0 "string/strncasecmp.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "string/strncasecmp.c"
# 43 "string/strncasecmp.c"
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
# 44 "string/strncasecmp.c" 2
# 1 "include/ctype.h" 1
# 9 "include/ctype.h"
int isalnum (int __c);
int isalpha (int __c);
int iscntrl (int __c);
int isdigit (int __c);
int isgraph (int __c);
int islower (int __c);
int isprint (int __c);
int ispunct (int __c);
int isspace (int __c);
int isupper (int __c);
int isxdigit (int __c);
int tolower (int __c);
int toupper (int __c);


int isascii (int __c);
int toascii (int __c);
int _tolower (int __c);
int _toupper (int __c);
# 40 "include/ctype.h"
extern const char _ctype_[];
# 45 "string/strncasecmp.c" 2

int
strncasecmp(const char *s1 , const char *s2 , size_t n)



{
  if (n == 0)
    return 0;

  while (n-- != 0 && ({ int __x = (*s1); ((_ctype_+1)[(unsigned)(__x)]&01) ? (__x - 'A' + 'a') : __x;}) == ({ int __x = (*s2); ((_ctype_+1)[(unsigned)(__x)]&01) ? (__x - 'A' + 'a') : __x;}))
    {
      if (n == 0 || *s1 == '\0' || *s2 == '\0')
 break;
      s1++;
      s2++;
    }

  return ({ int __x = (*(unsigned char *) s1); ((_ctype_+1)[(unsigned)(__x)]&01) ? (__x - 'A' + 'a') : __x;}) - ({ int __x = (*(unsigned char *) s2); ((_ctype_+1)[(unsigned)(__x)]&01) ? (__x - 'A' + 'a') : __x;});
}
