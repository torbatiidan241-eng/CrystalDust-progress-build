# 0 "signal/signal.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "signal/signal.c"
# 115 "signal/signal.c"
# 1 "include/errno.h" 1
# 1 "include/sys/errno.h" 1
# 11 "include/sys/errno.h"
# 1 "include/sys/reent.h" 1
# 13 "include/sys/reent.h"
# 1 "include/_ansi.h" 1
# 15 "include/_ansi.h"
# 1 "include/sys/config.h" 1
# 103 "include/sys/config.h"
typedef int __int32_t;
typedef unsigned int __uint32_t;
# 16 "include/_ansi.h" 2
# 14 "include/sys/reent.h" 2
# 1 "include/time.h" 1
# 10 "include/time.h"
# 1 "include/_ansi.h" 1
# 11 "include/time.h" 2
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
# 12 "include/sys/errno.h" 2



extern int *__errno (void);



extern const char * const _sys_errlist[];
extern int _sys_nerr;
# 2 "include/errno.h" 2
# 116 "signal/signal.c" 2
# 1 "include/signal.h" 1







# 1 "include/sys/signal.h" 1
# 13 "include/sys/signal.h"
typedef unsigned long sigset_t;
struct sigaction
{
 void (*sa_handler)(int);
 sigset_t sa_mask;
 int sa_flags;
};
# 31 "include/sys/signal.h"
int sigprocmask (int __how, const sigset_t *__a, sigset_t *__b);
# 9 "include/signal.h" 2

typedef int sig_atomic_t;





typedef void (*_sig_func_ptr) (int);

struct _reent;

_sig_func_ptr _signal_r (struct _reent *, int, _sig_func_ptr);
int _raise_r (struct _reent *, int);


_sig_func_ptr signal (int, _sig_func_ptr);
int raise (int);
# 117 "signal/signal.c" 2

# 1 "include/stdlib.h" 1
# 21 "include/stdlib.h"
typedef struct
{
  int quot;
  int rem;
} div_t;

typedef struct
{
  long quot;
  long rem;
} ldiv_t;
# 45 "include/stdlib.h"
extern int __mb_cur_max;




void abort (void) __attribute__ ((noreturn));
int abs (int);
int atexit (void (*__func)(void));
double atof (const char *__nptr);

float atoff (const char *__nptr);

int atoi (const char *__nptr);
long atol (const char *__nptr);
void * bsearch (const void * __key, const void * __base, size_t __nmemb, size_t __size, int (*_compar) (const void *, const void *))



                                                          ;
void * calloc (size_t __nmemb, size_t __size);
div_t div (int __numer, int __denom);
void exit (int __status) __attribute__ ((noreturn));
void free (void *);
char * getenv (const char *__string);
long labs (long);
ldiv_t ldiv (long __numer, long __denom);
void * malloc (size_t __size);
int mblen (const char *, size_t);
int mbtowc (wchar_t *, const char *, size_t);
int _mbtowc_r (struct _reent *, wchar_t *, const char *, size_t, int *);
int wctomb (char *, wchar_t);
int _wctomb_r (struct _reent *, char *, wchar_t, int *);
size_t mbstowcs (wchar_t *, const char *, size_t);
size_t _mbstowcs_r (struct _reent *, wchar_t *, const char *, size_t, int *);
size_t wcstombs (char *, const wchar_t *, size_t);
size_t _wcstombs_r (struct _reent *, char *, const wchar_t *, size_t, int *);
void qsort (void * __base, size_t __nmemb, size_t __size, int(*_compar)(const void *, const void *));
int rand (void);
void * realloc (void * __r, size_t __size);
void srand (unsigned __seed);
double strtod (const char *__n, char **_end_PTR);

float strtodf (const char *__n, char **_end_PTR);

long strtol (const char *__n, char **_end_PTR, int __base);
unsigned long strtoul (const char *_n_PTR, char **_end_PTR, int __base);
unsigned long _strtoul_r (struct _reent *,const char *_n_PTR, char **_end_PTR, int __base);
int system (const char *__string);


void cfree (void *);
int putenv (const char *__string);
int setenv (const char *__string, const char *__value, int __overwrite);

char * gcvt (double,int,char *);
char * gcvtf (float,int,char *);
char * fcvt (double,int,int *,int *);
char * fcvtf (float,int,int *,int *);
char * ecvt (double,int,int *,int *);
char * ecvtbuf (double, int, int*, int*, char *);
char * fcvtbuf (double, int, int*, int*, char *);
char * ecvtf (float,int,int *,int *);
char * dtoa (double, int, int, int *, int*, char**);
int rand_r (unsigned *__seed);
# 119 "include/stdlib.h"
char * _dtoa_r (struct _reent *, double, int, int, int *, int*, char**);
void * _malloc_r (struct _reent *, size_t);
void * _calloc_r (struct _reent *, size_t, size_t);
void _free_r (struct _reent *, void *);
void * _realloc_r (struct _reent *, void *, size_t);
void _mstats_r (struct _reent *, char *);
int _system_r (struct _reent *, const char *);

void __eprintf (const char *, const char *, unsigned int, const char *);
# 119 "signal/signal.c" 2
# 1 "include/reent.h" 1
# 49 "include/reent.h"
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
# 120 "signal/signal.c" 2
# 1 "include/_syslist.h" 1
# 121 "signal/signal.c" 2

int
_init_signal_r(struct _reent *ptr)

{
  int i;

  if (ptr->_sig_func == ((void *)0))
    {
      ptr->_sig_func = (_sig_func_ptr *)_malloc_r (ptr, sizeof (_sig_func_ptr) * 32);
      if (ptr->_sig_func == ((void *)0))
 return -1;

      for (i = 0; i < 32; i++)
 ptr->_sig_func[i] = ((void (*)(int))0);
    }

  return 0;
}

_sig_func_ptr
_signal_r(struct _reent *ptr , int sig , _sig_func_ptr func)



{
  _sig_func_ptr old_func, *temp;

  if (sig < 0 || sig >= 32)
    {
      ptr->_errno = 22;
      return ((void (*)(int))-1);
    }

  if (ptr->_sig_func == ((void *)0) && _init_signal_r (ptr) != 0)
    return ((void (*)(int))-1);

  old_func = ptr->_sig_func[sig];
  ptr->_sig_func[sig] = func;

  return old_func;
}

int
_raise_r (ptr, sig)
     struct _reent *ptr;
     int sig;
{
  _sig_func_ptr func;
  int result = 0;

  if (sig < 0 || sig >= 32)
    {
      ptr->_errno = 22;
      return -1;
    }

  if (ptr->_sig_func == ((void *)0) && _init_signal_r (ptr) != 0)
    return -1;

  switch ((long) ptr->_sig_func[sig])
    {
    case ((void (*)(int))0):
      return _kill_r (ptr, _getpid_r (ptr), sig);

    case ((void (*)(int))1):
      break;

    case ((void (*)(int))-1):
      ptr->_errno = 22;
      result = 1;
      break;

    default:
      func = ptr->_sig_func[sig];
      ptr->_sig_func[sig] = ((void (*)(int))0);
      func (sig);
      break;
    }

  return result;
}

int
__sigtramp_r (ptr, sig)
     struct _reent *ptr;
     int sig;
{
  _sig_func_ptr func;

  if (sig < 0 || sig >= 32)
    {
      return -1;
    }

  if (ptr->_sig_func == ((void *)0) && _init_signal_r (ptr) != 0)
    return -1;

  switch ((long) ptr->_sig_func[sig])
    {
    case ((void (*)(int))0):
      return 1;

    case ((void (*)(int))-1):
      return 2;

    case ((void (*)(int))1):
      return 3;

    default:
      func = ptr->_sig_func[sig];
      ptr->_sig_func[sig] = ((void (*)(int))0);
      func (sig);
      return 0;
    }
}



int
raise (sig)
     int sig;
{
  return _raise_r (_impure_ptr, sig);
}

_sig_func_ptr
signal(int sig , _sig_func_ptr func)


{
  return _signal_r (_impure_ptr, sig, func);
}

int
_init_signal ()
{
  return _init_signal_r (_impure_ptr);
}

int
__sigtramp (int sig)
{
  return __sigtramp_r (_impure_ptr, sig);
}
