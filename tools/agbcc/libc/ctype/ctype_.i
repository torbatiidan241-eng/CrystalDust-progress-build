# 0 "ctype/ctype_.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "ctype/ctype_.c"
# 38 "ctype/ctype_.c"
# 1 "include/ctype.h" 1






# 1 "include/_ansi.h" 1
# 15 "include/_ansi.h"
# 1 "include/sys/config.h" 1
# 103 "include/sys/config.h"
typedef int __int32_t;
typedef unsigned int __uint32_t;
# 16 "include/_ansi.h" 2
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
# 39 "ctype/ctype_.c" 2




const char _ctype_[1 + 256] = {

 0,
 040, 040, 040, 040, 040, 040, 040, 040,
 040, 040|010, 040|010, 040|010, 040|010, 040|010, 040, 040,
 040, 040, 040, 040, 040, 040, 040, 040,
 040, 040, 040, 040, 040, 040, 040, 040,
 010|0200, 020, 020, 020, 020, 020, 020, 020,
 020, 020, 020, 020, 020, 020, 020, 020,
 04, 04, 04, 04, 04, 04, 04, 04,
 04, 04, 020, 020, 020, 020, 020, 020,
 020, 01|0100, 01|0100, 01|0100, 01|0100, 01|0100, 01|0100, 01,
 01, 01, 01, 01, 01, 01, 01, 01,
 01, 01, 01, 01, 01, 01, 01, 01,
 01, 01, 01, 020, 020, 020, 020, 020,
 020, 02|0100, 02|0100, 02|0100, 02|0100, 02|0100, 02|0100, 02,
 02, 02, 02, 02, 02, 02, 02, 02,
 02, 02, 02, 02, 02, 02, 02, 02,
 02, 02, 02, 020, 020, 020, 020, 040
};
