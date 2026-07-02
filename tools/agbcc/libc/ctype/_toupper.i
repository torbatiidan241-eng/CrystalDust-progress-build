# 0 "ctype/_toupper.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "ctype/_toupper.c"
# 1 "include/_ansi.h" 1
# 15 "include/_ansi.h"
# 1 "include/sys/config.h" 1
# 103 "include/sys/config.h"
typedef int __int32_t;
typedef unsigned int __uint32_t;
# 16 "include/_ansi.h" 2
# 2 "ctype/_toupper.c" 2
# 1 "include/ctype.h" 1






# 1 "include/_ansi.h" 1
# 8 "include/ctype.h" 2

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
# 3 "ctype/_toupper.c" 2


int
_toupper(int c)
{
  return ((_ctype_+1)[(unsigned)(c)]&02) ? c - 'a' + 'A' : c;
}
