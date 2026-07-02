# 0 "stdlib/mlock.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "stdlib/mlock.c"
# 38 "stdlib/mlock.c"
# 1 "include/malloc.h" 1





# 1 "include/_ansi.h" 1
# 15 "include/_ansi.h"
# 1 "include/sys/config.h" 1
# 103 "include/sys/config.h"
typedef int __int32_t;
typedef unsigned int __uint32_t;
# 16 "include/_ansi.h" 2
# 7 "include/malloc.h" 2
# 1 "include/sys/reent.h" 1
# 14 "include/sys/reent.h"
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
# 8 "include/malloc.h" 2
# 19 "include/malloc.h"
struct mallinfo {
  int arena;
  int ordblks;
  int smblks;
  int hblks;
  int hblkhd;
  int usmblks;
  int fsmblks;
  int uordblks;
  int fordblks;
  int keepcost;
};



extern void * malloc (size_t);
extern void * _malloc_r (struct _reent *, size_t);

extern void free (void *);
extern void _free_r (struct _reent *, void *);

extern void * realloc (void *, size_t);
extern void * _realloc_r (struct _reent *, void *, size_t);

extern void * calloc (size_t, size_t);
extern void * _calloc_r (struct _reent *, size_t, size_t);

extern void * memalign (size_t, size_t);
extern void * _memalign_r (struct _reent *, size_t, size_t);

extern struct mallinfo mallinfo (void);
extern struct mallinfo _mallinfo_r (struct _reent *);

extern void malloc_stats (void);
extern void _malloc_stats_r (struct _reent *);

extern int mallopt (int, int);
extern int _mallopt_r (struct _reent *, int, int);

extern size_t malloc_usable_size (void *);
extern size_t _malloc_usable_size_r (struct _reent *, void *);




extern void * valloc (size_t);
extern void * _valloc_r (struct _reent *, size_t);

extern void * pvalloc (size_t);
extern void * _pvalloc_r (struct _reent *, size_t);

extern int malloc_trim (size_t);
extern int _malloc_trim_r (struct _reent *, size_t);



extern void cfree (void *);



extern void mstats (char *);
extern void _mstats_r (struct _reent *, char *);
# 39 "stdlib/mlock.c" 2

void
__malloc_lock (ptr)
     struct _reent *ptr;
{
}

void
__malloc_unlock (ptr)
     struct _reent *ptr;
{
}
