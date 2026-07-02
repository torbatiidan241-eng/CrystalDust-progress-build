# 0 "time/strftime.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "time/strftime.c"
# 142 "time/strftime.c"
# 1 "../ginclude/stddef.h" 1





typedef long int ptrdiff_t;



typedef unsigned long int size_t;






typedef int wchar_t;
# 143 "time/strftime.c" 2
# 1 "include/stdio.h" 1
# 32 "include/stdio.h"
# 1 "include/_ansi.h" 1
# 15 "include/_ansi.h"
# 1 "include/sys/config.h" 1
# 103 "include/sys/config.h"
typedef int __int32_t;
typedef unsigned int __uint32_t;
# 16 "include/_ansi.h" 2
# 33 "include/stdio.h" 2







# 1 "../ginclude/stdarg.h" 1
# 9 "../ginclude/stdarg.h"
typedef void *__gnuc_va_list;
# 31 "../ginclude/stdarg.h"
typedef __gnuc_va_list va_list;
# 41 "include/stdio.h" 2







# 1 "include/sys/reent.h" 1
# 13 "include/sys/reent.h"
# 1 "include/_ansi.h" 1
# 14 "include/sys/reent.h" 2
# 1 "include/time.h" 1
# 21 "include/time.h"
# 1 "include/machine/time.h" 1
# 22 "include/time.h" 2
# 33 "include/time.h"
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
# 49 "include/stdio.h" 2

typedef _fpos_t fpos_t;

typedef struct __sFILE FILE;
# 128 "include/stdio.h"
int remove (const char *);
int rename (const char *, const char *);

char * tempnam (const char *, const char *);
FILE * tmpfile (void);
char * tmpnam (char *);
int fclose (FILE *);
int fflush (FILE *);
FILE * freopen (const char *, const char *, FILE *);
void setbuf (FILE *, char *);
int setvbuf (FILE *, char *, int, size_t);
int fprintf (FILE *, const char *, ...);
int fscanf (FILE *, const char *, ...);
int printf (const char *, ...);
int scanf (const char *, ...);
int sscanf (const char *, const char *, ...);
int vfprintf (FILE *, const char *, __gnuc_va_list);
int vprintf (const char *, __gnuc_va_list);
int vsprintf (char *, const char *, __gnuc_va_list);
int fgetc (FILE *);
char * fgets (char *, int, FILE *);
int fputc (int, FILE *);
int fputs (const char *, FILE *);
int getc (FILE *);
int getchar (void);
char * gets (char *);
int putc (int, FILE *);
int putchar (int);
int puts (const char *);
int ungetc (int, FILE *);
size_t fread (void *, size_t _size, size_t _n, FILE *);
size_t fwrite (const void * , size_t _size, size_t _n, FILE *);
int fgetpos (FILE *, fpos_t *);
int fseek (FILE *, long, int);
int fsetpos (FILE *, const fpos_t *);
long ftell ( FILE *);
void rewind (FILE *);
void clearerr (FILE *);
int feof (FILE *);
int ferror (FILE *);
void perror (const char *);

FILE * fopen (const char *_name, const char *_type);
int sprintf (char *, const char *, ...);


int vfiprintf (FILE *, const char *, __gnuc_va_list);
int iprintf (const char *, ...);
int fiprintf (FILE *, const char *, ...);
int siprintf (char *, const char *, ...);
# 186 "include/stdio.h"
FILE * fdopen (int, const char *);

int fileno (FILE *);
int getw (FILE *);
int pclose (FILE *);
FILE * popen (const char *, const char *);
int putw (int, FILE *);
void setbuffer (FILE *, char *, int);
int setlinebuf (FILE *);






FILE * _fdopen_r (struct _reent *, int, const char *);
FILE * _fopen_r (struct _reent *, const char *, const char *);
int _getchar_r (struct _reent *);
char * _gets_r (struct _reent *, char *);
int _iprintf_r (struct _reent *, const char *, ...);
int _mkstemp_r (struct _reent *, char *);
char * _mktemp_r (struct _reent *, char *);
void _perror_r (struct _reent *, const char *);
int _printf_r (struct _reent *, const char *, ...);
int _putchar_r (struct _reent *, int);
int _puts_r (struct _reent *, const char *);
int _remove_r (struct _reent *, const char *);
int _rename_r (struct _reent *, const char *_old, const char *_new)
                                          ;
int _scanf_r (struct _reent *, const char *, ...);
int _sprintf_r (struct _reent *, char *, const char *, ...);
char * _tempnam_r (struct _reent *, const char *, const char *);
FILE * _tmpfile_r (struct _reent *);
char * _tmpnam_r (struct _reent *, char *);
int _vfprintf_r (struct _reent *, FILE *, const char *, __gnuc_va_list);
int _vprintf_r (struct _reent *, const char *, __gnuc_va_list);
int _vsprintf_r (struct _reent *, char *, const char *, __gnuc_va_list);





int __srget (FILE *);
int __swbuf (int, FILE *);






FILE *funopen (const void * _cookie, int (*readfn)(void * _cookie, char *_buf, int _n), int (*writefn)(void * _cookie, const char *_buf, int _n), fpos_t (*seekfn)(void * _cookie, fpos_t _off, int _whence), int (*closefn)(void * _cookie))



                                ;
# 144 "time/strftime.c" 2


static const int dname_len[7] =
{6, 6, 7, 9, 8, 6, 8};

static const char *const dname[7] =
{"Sunday", "Monday", "Tuesday", "Wednesday",
 "Thursday", "Friday", "Saturday"};

static const int mname_len[12] =
{7, 8, 5, 5, 3, 4, 4, 6, 9, 7, 8, 8};

static const char *const mname[12] =
{"January", "February", "March", "April",
 "May", "June", "July", "August", "September", "October", "November",
 "December"};

size_t
strftime(char *s , size_t maxsize , const char *format , const struct tm *tim_p)




{
  size_t count = 0;
  int i;

  for (;;)
    {
      while (*format && *format != '%')
 {
   if (count < maxsize - 1)
     s[count++] = *format++;
   else
     return 0;
 }

      if (*format == '\0')
 break;

      format++;
      switch (*format)
 {
 case 'a':
   for (i = 0; i < 3; i++)
     {
       if (count < maxsize - 1)
  s[count++] =
    dname[tim_p->tm_wday][i];
       else
  return 0;
     }
   break;
 case 'A':
   for (i = 0; i < dname_len[tim_p->tm_wday]; i++)
     {
       if (count < maxsize - 1)
  s[count++] =
    dname[tim_p->tm_wday][i];
       else
  return 0;
     }
   break;
 case 'b':
   for (i = 0; i < 3; i++)
     {
       if (count < maxsize - 1)
  s[count++] =
    mname[tim_p->tm_mon][i];
       else
  return 0;
     }
   break;
 case 'B':
   for (i = 0; i < mname_len[tim_p->tm_mon]; i++)
     {
       if (count < maxsize - 1)
  s[count++] =
    mname[tim_p->tm_mon][i];
       else
  return 0;
     }
   break;
 case 'c':
   if (count < maxsize - 24)
     {
       for (i = 0; i < 3; i++)
  s[count++] =
    dname[tim_p->tm_wday][i];
       s[count++] = ' ';
       for (i = 0; i < 3; i++)
  s[count++] =
    mname[tim_p->tm_mon][i];

       sprintf (&s[count],
         " %.2d %2.2d:%2.2d:%2.2d %.4d",
         tim_p->tm_mday, tim_p->tm_hour,
         tim_p->tm_min,
         tim_p->tm_sec, 1900 +
         tim_p->tm_year);
       count += 17;
     }
   else
     return 0;
   break;
 case 'd':
   if (count < maxsize - 2)
     {
       sprintf (&s[count], "%.2d",
         tim_p->tm_mday);
       count += 2;
     }
   else
     return 0;
   break;
 case 'H':
   if (count < maxsize - 2)
     {
       sprintf (&s[count], "%2.2d",
         tim_p->tm_hour);
       count += 2;
     }
   else
     return 0;
   break;
 case 'I':
   if (count < maxsize - 2)
     {
       if (tim_p->tm_hour == 0 ||
    tim_p->tm_hour == 12)
  {
    s[count++] = '1';
    s[count++] = '2';
  }
       else
  {
    sprintf (&s[count], "%.2d",
      tim_p->tm_hour % 12);
    count += 2;
  }
     }
   else
     return 0;
   break;
 case 'j':
   if (count < maxsize - 3)
     {
       sprintf (&s[count], "%.3d",
         tim_p->tm_yday + 1);
       count += 3;
     }
   else
     return 0;
   break;
 case 'm':
   if (count < maxsize - 2)
     {
       sprintf (&s[count], "%.2d",
         tim_p->tm_mon + 1);
       count += 2;
     }
   else
     return 0;
   break;
 case 'M':
   if (count < maxsize - 2)
     {
       sprintf (&s[count], "%2.2d",
         tim_p->tm_min);
       count += 2;
     }
   else
     return 0;
   break;
 case 'p':
   if (count < maxsize - 2)
     {
       if (tim_p->tm_hour < 12)
  s[count++] = 'A';
       else
  s[count++] = 'P';

       s[count++] = 'M';
     }
   else
     return 0;
   break;
 case 'S':
   if (count < maxsize - 2)
     {
       sprintf (&s[count], "%2.2d",
         tim_p->tm_sec);
       count += 2;
     }
   else
     return 0;
   break;
 case 'U':
   if (count < maxsize - 2)
     {
       sprintf (&s[count], "%2.2d",
         (tim_p->tm_yday + 7 -
   tim_p->tm_wday) / 7);
       count += 2;
     }
   else
     return 0;
   break;
 case 'w':
   if (count < maxsize - 1)
     {
       sprintf (&s[count], "%1.1d",
         tim_p->tm_wday);
       count++;
     }
   else
     return 0;
   break;
 case 'W':
   if (count < maxsize - 2)
     {
       sprintf (&s[count], "%2.2d",
         (tim_p->tm_yday + ((8 -
        tim_p->tm_wday) % 7)) / 7);
       count += 2;
     }
   else
     return 0;
   break;
 case 'x':
   if (count < maxsize - 15)
     {
       for (i = 0; i < 3; i++)
  s[count++] =
    dname[tim_p->tm_wday][i];
       s[count++] = ' ';
       for (i = 0; i < 3; i++)
  s[count++] =
    mname[tim_p->tm_mon][i];

       sprintf (&s[count],
         " %.2d %.4d", tim_p->tm_mday,
         1900 + tim_p->tm_year);
       count += 8;
     }
   else
     return 0;
   break;
 case 'X':
   if (count < maxsize - 8)
     {
       sprintf (&s[count],
         "%2.2d:%2.2d:%2.2d",
         tim_p->tm_hour, tim_p->tm_min,
         tim_p->tm_sec);
       count += 8;
     }
   else
     return 0;
   break;
 case 'y':
   if (count < maxsize - 2)
     {



       sprintf (&s[count], "%2.2d",
         (tim_p->tm_year % 100 + 100) % 100);
       count += 2;
     }
   else
     return 0;
   break;
 case 'Y':
   if (count < maxsize - 4)
     {
       sprintf (&s[count], "%.4d",
         1900 + tim_p->tm_year);
       count += 4;
     }
   else
     return 0;
   break;
 case 'Z':
   break;
 case '%':
   if (count < maxsize - 1)
     s[count++] = '%';
   else
     return 0;
   break;
 }
      if (*format)
 format++;
      else
 break;
    }
  s[count] = '\0';

  return count;
}
