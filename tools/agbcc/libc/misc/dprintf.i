# 0 "misc/dprintf.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "misc/dprintf.c"






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
# 8 "misc/dprintf.c" 2
# 1 "include/reent.h" 1
# 48 "include/reent.h"
# 1 "include/sys/reent.h" 1
# 13 "include/sys/reent.h"
# 1 "include/_ansi.h" 1
# 14 "include/sys/reent.h" 2
# 1 "include/time.h" 1
# 21 "include/time.h"
# 1 "include/machine/time.h" 1
# 22 "include/time.h" 2
# 30 "include/time.h"
# 1 "../ginclude/stddef.h" 1





typedef long int ptrdiff_t;



typedef unsigned long int size_t;






typedef int wchar_t;
# 31 "include/time.h" 2


# 1 "include/machine/types.h" 1
# 34 "include/time.h" 2


typedef unsigned long clock_t;




typedef long time_t;



struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;
};

clock_t clock (void);
double difftime (time_t _time2, time_t _time1);
time_t mktime (struct tm *_timeptr);
time_t time (time_t *_timer);

char *asctime (const struct tm *_tblock);
char *ctime (const time_t *_time);
struct tm *gmtime (const time_t *_timer);
struct tm *localtime (const time_t *_timer);

size_t strftime (char *_s, size_t _maxsize, const char *_fmt, const struct tm *_t);

char *asctime_r (const struct tm *, char *);
char *ctime_r (const time_t *, char *);
struct tm *gmtime_r (const time_t *, struct tm *);
struct tm *localtime_r (const time_t *, struct tm *);
# 15 "include/sys/reent.h" 2
# 28 "include/sys/reent.h"
typedef __uint32_t ULong;


struct _glue
{
  struct _glue *_next;
  int _niobs;
  struct __sFILE *_iobs;
};

struct _Bigint
{
  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  ULong _x[1];
};







struct _atexit {
 struct _atexit *_next;
 int _ind;
 void (*_fns[32])(void);
};
# 64 "include/sys/reent.h"
struct __sbuf {
 unsigned char *_base;
 int _size;
};






typedef long _fpos_t;
# 102 "include/sys/reent.h"
struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;


  void * _cookie;

  int (*_read) (void * _cookie, char *_buf, int _n);
  int (*_write) (void * _cookie, const char *_buf, int _n);
  _fpos_t (*_seek) (void * _cookie, _fpos_t _offset, int _whence);
  int (*_close) (void * _cookie);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  int _offset;

  struct _reent *_data;
};
# 146 "include/sys/reent.h"
struct _reent
{

  int _errno;




  struct __sFILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];

  int _current_category;
  const char *_current_locale;

  int __sdidinit;

  void (*__cleanup) (struct _reent *);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union
    {
      struct
        {
          unsigned int _rand_next;
          char * _strtok_last;
          char _asctime_buf[26];
          struct tm _localtime_buf;
          int _gamma_signgam;
        } _reent;



      struct
        {

          unsigned char * _nextf[30];
          unsigned int _nmalloc[30];
        } _unused;
    } _new;


  struct _atexit *_atexit;
  struct _atexit _atexit0;


  void (**(_sig_func))(int);




  struct _glue __sglue;
  struct __sFILE __sf[3];
};
# 225 "include/sys/reent.h"
extern struct _reent *_impure_ptr ;

void _reclaim_reent (struct _reent *);
# 49 "include/reent.h" 2
# 1 "include/sys/_types.h" 1
# 12 "include/sys/_types.h"
typedef long _off_t;
typedef long _ssize_t;
# 50 "include/reent.h" 2






struct stat;
struct tms;
struct timeval;
struct timezone;



extern int _close_r (struct _reent *, int);
extern int _execve_r (struct _reent *, char *, char **, char **);
extern int _fcntl_r (struct _reent *, int, int, int);
extern int _fork_r (struct _reent *);
extern int _fstat_r (struct _reent *, int, struct stat *);
extern int _getpid_r (struct _reent *);
extern int _kill_r (struct _reent *, int, int);
extern int _link_r (struct _reent *, const char *, const char *);
extern _off_t _lseek_r (struct _reent *, int, _off_t, int);
extern int _open_r (struct _reent *, const char *, int, int);
extern _ssize_t _read_r (struct _reent *, int, void *, size_t);
extern void *_sbrk_r (struct _reent *, size_t);
extern int _stat_r (struct _reent *, const char *, struct stat *);
extern unsigned long _times_r (struct _reent *, struct tms *);
extern int _unlink_r (struct _reent *, const char *);
extern int _wait_r (struct _reent *, int *);
extern _ssize_t _write_r (struct _reent *, int, const void *, size_t);


extern int _gettimeofday_r (struct _reent *, struct timeval *tp, struct timezone *tzp);
# 9 "misc/dprintf.c" 2
# 1 "include/string.h" 1
# 23 "include/string.h"
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
# 10 "misc/dprintf.c" 2
# 1 "include/unctrl.h" 1
# 43 "include/unctrl.h"
extern const char * const __unctrl[256];
extern const char __unctrllen[256];
# 11 "misc/dprintf.c" 2


# 1 "../ginclude/stdarg.h" 1
# 9 "../ginclude/stdarg.h"
typedef void *__gnuc_va_list;
# 31 "../ginclude/stdarg.h"
typedef __gnuc_va_list va_list;
# 14 "misc/dprintf.c" 2




static char *parse_number ();
static long get_number ();
static void print_number ();
static void write_char ();
static void write_string ();


static int big_endian_p;
# 52 "misc/dprintf.c"
void

__dprintf (char *fmt, ...)





{
  va_list args;


  {
    short tmp = 1;
    big_endian_p = *(char *) &tmp == 0;
  }


  (args = ((__gnuc_va_list) __builtin_next_arg(fmt)));




  while (*fmt)
    {
      char c, *p;
      int count;
      long l;

      if (*fmt != '%' || *++fmt == '%')
 {
   write_char (*fmt++);
   continue;
 }

      if (*fmt == 'N')
 {
   count = (args = (__gnuc_va_list)((char *)(args) + (((sizeof (int) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))), *((int *)(void *)((char *)(args) - (((sizeof (int) + sizeof (int) - 1) / sizeof (int)) * sizeof (int)))));
   p = (args = (__gnuc_va_list)((char *)(args) + (((sizeof (char *) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))), *((char * *)(void *)((char *)(args) - (((sizeof (char *) + sizeof (int) - 1) / sizeof (int)) * sizeof (int)))));
   ++fmt;
   c = *fmt++;

   while (--count >= 0)
     {
       switch (c)
  {
  case 'c' :
    write_string (__unctrl[(*p++) & 0xff]);
    break;
  case 'p' :
    print_number (16, 1, get_number (p, sizeof (char *), 1));
    p += sizeof (char *);
    break;
  case 'd' :
  case 'u' :
  case 'x' :
    print_number (c == 'x' ? 16 : 10, c != 'd',
    get_number (p, sizeof (int), c != 'd'));
    p += sizeof (int);
    break;
  case 's' :
    write_string (*(char **) p);
    p += sizeof (char *);
    break;
  }
       if (count > 0)
  write_char (' ');
     }
 }
      else
 {
   switch (c = *fmt++)
     {
     case 'c' :
       c = (args = (__gnuc_va_list)((char *)(args) + (((sizeof (int) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))), *((int *)(void *)((char *)(args) - (((sizeof (int) + sizeof (int) - 1) / sizeof (int)) * sizeof (int)))));
       write_string (__unctrl[(c) & 0xff]);
       break;
     case 'p' :
       l = (long) (args = (__gnuc_va_list)((char *)(args) + (((sizeof (char *) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))), *((char * *)(void *)((char *)(args) - (((sizeof (char *) + sizeof (int) - 1) / sizeof (int)) * sizeof (int)))));
       print_number (16, 1, l);
       break;
     case 'd' :
     case 'u' :
     case 'x' :
       l = (args = (__gnuc_va_list)((char *)(args) + (((sizeof (int) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))), *((int *)(void *)((char *)(args) - (((sizeof (int) + sizeof (int) - 1) / sizeof (int)) * sizeof (int)))));
       print_number (c == 'x' ? 16 : 10, c != 'd', l);
       break;
     case 's' :
       p = (args = (__gnuc_va_list)((char *)(args) + (((sizeof (char *) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))), *((char * *)(void *)((char *)(args) - (((sizeof (char *) + sizeof (int) - 1) / sizeof (int)) * sizeof (int)))));
       write_string (p);
       break;
     }
 }
    }

  ((void)0);
}





static char *
parse_number (s, p)
     char *s;
     long *p;
{
  long x = 0;

  while (((_ctype_+1)[(unsigned)(*s)]&04))
    {
      x = (x * 10) + (*s - '0');
      ++s;
    }

  *p = x;
  return s;
}



static long
get_number (s, size, unsigned_p)
     char *s;
     long size;
     int unsigned_p;
{
  long x;
  unsigned char *p = (unsigned char *) s;

  switch (size)
    {
    case 1 :
      x = *p;
      if (!unsigned_p)
 x = (x ^ 0x80) - 0x80;
      return x;
    case 2 :
      if (big_endian_p)
 x = (p[0] << 8) | p[1];
      else
 x = (p[1] << 8) | p[0];
      if (!unsigned_p)
 x = (x ^ 0x8000) - 0x8000;
      return x;
    case 4 :
      if (big_endian_p)
 x = ((long)p[0] << 24) | ((long)p[1] << 16) | (p[2] << 8) | p[3];
      else
 x = ((long)p[3] << 24) | ((long)p[2] << 16) | (p[1] << 8) | p[0];
      if (!unsigned_p)
 x = (x ^ 0x80000000L) - 0x80000000L;
      return x;




    default :
      return 0;
  }
}



static void
print_number (base, unsigned_p, n)
     int base;
     int unsigned_p;
     long n;
{
  static char chars[16] = "0123456789abcdef";
  char *p, buf[32];
  unsigned long x;

  if (!unsigned_p && n < 0)
    {
      write_char ('-');
      x = -n;
    }
  else
    x = n;

  p = buf + sizeof (buf);
  *--p = '\0';
  do
    {
      *--p = chars[x % base];
      x /= base;
    }
  while (x != 0);

  write_string (p);
}





static void
write_char (c)
     char c;
{
  _write_r (_impure_ptr, 2, &c, 1);
}





static void
write_string (s)
     char *s;
{
  _write_r (_impure_ptr, 2, s, strlen (s));
}
