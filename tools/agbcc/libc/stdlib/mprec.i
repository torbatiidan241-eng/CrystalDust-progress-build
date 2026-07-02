# 0 "stdlib/mprec.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "stdlib/mprec.c"
# 83 "stdlib/mprec.c"
# 1 "include/_ansi.h" 1
# 15 "include/_ansi.h"
# 1 "include/sys/config.h" 1
# 103 "include/sys/config.h"
typedef int __int32_t;
typedef unsigned int __uint32_t;
# 16 "include/_ansi.h" 2
# 84 "stdlib/mprec.c" 2
# 1 "include/stdlib.h" 1
# 13 "include/stdlib.h"
# 1 "include/_ansi.h" 1
# 14 "include/stdlib.h" 2



# 1 "../ginclude/stddef.h" 1





typedef long int ptrdiff_t;



typedef unsigned long int size_t;






typedef int wchar_t;
# 18 "include/stdlib.h" 2

# 1 "include/sys/reent.h" 1
# 14 "include/sys/reent.h"
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
# 20 "include/stdlib.h" 2

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
# 85 "stdlib/mprec.c" 2
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
# 86 "stdlib/mprec.c" 2
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
# 87 "stdlib/mprec.c" 2
# 1 "stdlib/mprec.h" 1
# 29 "stdlib/mprec.h"
# 1 "include/ieeefp.h" 1





# 1 "include/machine/ieeefp.h" 1
# 7 "include/ieeefp.h" 2
# 16 "include/ieeefp.h"
typedef union
{
  double value;
  struct
  {
    unsigned int sign : 1;
    unsigned int exponent: 11;
    unsigned int fraction0:4;
    unsigned int fraction1:16;
    unsigned int fraction2:16;
    unsigned int fraction3:16;

  } number;
  struct
  {
    unsigned int sign : 1;
    unsigned int exponent: 11;
    unsigned int quiet:1;
    unsigned int function0:3;
    unsigned int function1:16;
    unsigned int function2:16;
    unsigned int function3:16;
  } nan;
  struct
  {
    unsigned long msw;
    unsigned long lsw;
  } parts;
    long aslong[2];
} __ieee_double_shape_type;
# 97 "include/ieeefp.h"
typedef union
{
  float value;
  struct
  {
    unsigned int sign : 1;
    unsigned int exponent: 8;
    unsigned int fraction0: 7;
    unsigned int fraction1: 16;
  } number;
  struct
  {
    unsigned int sign:1;
    unsigned int exponent:8;
    unsigned int quiet:1;
    unsigned int function0:6;
    unsigned int function1:16;
  } nan;
  long p1;

} __ieee_float_shape_type;
# 153 "include/ieeefp.h"
typedef int fp_rnd;





fp_rnd fpgetround (void);
fp_rnd fpsetround (fp_rnd);



typedef int fp_except;






fp_except fpgetmask (void);
fp_except fpsetmask (fp_except);
fp_except fpgetsticky (void);
fp_except fpsetsticky (fp_except);



typedef int fp_rdi;



fp_rdi fpgetroundtoi (void);
fp_rdi fpsetroundtoi (fp_rdi);

int isnan (double);
int isinf (double);
int finite (double);



int isnanf (float);
int isinff (float);
int finitef (float);
# 30 "stdlib/mprec.h" 2
# 1 "include/math.h" 1
# 18 "include/math.h"
union __dmath
{
  __uint32_t i[2];
  double d;
};

extern const union __dmath __infinity;
# 33 "include/math.h"
extern double atan (double);
extern double cos (double);
extern double sin (double);
extern double tan (double);
extern double tanh (double);
extern double frexp (double, int *);
extern double modf (double, double *);
extern double ceil (double);
extern double fabs (double);
extern double floor (double);






extern double acos (double);
extern double asin (double);
extern double atan2 (double, double);
extern double cosh (double);
extern double sinh (double);
extern double exp (double);
extern double ldexp (double, int);
extern double log (double);
extern double log10 (double);
extern double pow (double, double);
extern double sqrt (double);
extern double fmod (double, double);







extern double infinity (void);
extern double nan (void);
extern int isnan (double);
extern int isinf (double);
extern int finite (double);
extern double copysign (double, double);
extern int ilogb (double);

extern double asinh (double);
extern double cbrt (double);
extern double nextafter (double, double);
extern double rint (double);
extern double scalbn (double, int);


extern double log1p (double);
extern double expm1 (double);



extern double acosh (double);
extern double atanh (double);
extern double remainder (double, double);
extern double gamma (double);
extern double gamma_r (double, int *);
extern double lgamma (double);
extern double lgamma_r (double, int *);
extern double erf (double);
extern double erfc (double);
extern double y0 (double);
extern double y1 (double);
extern double yn (int, double);
extern double j0 (double);
extern double j1 (double);
extern double jn (int, double);



extern double hypot (double, double);


extern double cabs();
extern double drem (double, double);





extern float atanf (float);
extern float cosf (float);
extern float sinf (float);
extern float tanf (float);
extern float tanhf (float);
extern float frexpf (float, int *);
extern float modff (float, float *);
extern float ceilf (float);
extern float fabsf (float);
extern float floorf (float);


extern float acosf (float);
extern float asinf (float);
extern float atan2f (float, float);
extern float coshf (float);
extern float sinhf (float);
extern float expf (float);
extern float ldexpf (float, int);
extern float logf (float);
extern float log10f (float);
extern float powf (float, float);
extern float sqrtf (float);
extern float fmodf (float, float);




extern float infinityf (void);
extern float nanf (void);
extern int isnanf (float);
extern int isinff (float);
extern int finitef (float);
extern float copysignf (float, float);
extern int ilogbf (float);

extern float asinhf (float);
extern float cbrtf (float);
extern float nextafterf (float, float);
extern float rintf (float);
extern float scalbnf (float, int);
extern float log1pf (float);
extern float expm1f (float);


extern float acoshf (float);
extern float atanhf (float);
extern float remainderf (float, float);
extern float gammaf (float);
extern float gammaf_r (float, int *);
extern float lgammaf (float);
extern float lgammaf_r (float, int *);
extern float erff (float);
extern float erfcf (float);
extern float y0f (float);
extern float y1f (float);
extern float ynf (int, float);
extern float j0f (float);
extern float j1f (float);
extern float jnf (int, float);

extern float hypotf (float, float);

extern float cabsf();
extern float dremf (float, float);





extern int signgam;






struct exception

{
  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
  int err;
};




extern int matherr (struct exception *e);
# 246 "include/math.h"
enum __fdlibm_version
{
  __fdlibm_ieee = -1,
  __fdlibm_svid,
  __fdlibm_xopen,
  __fdlibm_posix
};




extern const enum __fdlibm_version __fdlib_version;
# 31 "stdlib/mprec.h" 2
# 1 "../ginclude/float.h" 1
# 32 "stdlib/mprec.h" 2
# 1 "include/errno.h" 1
# 1 "include/sys/errno.h" 1
# 15 "include/sys/errno.h"
extern int *__errno (void);



extern const char * const _sys_errlist[];
extern int _sys_nerr;
# 2 "include/errno.h" 2
# 33 "stdlib/mprec.h" 2
# 66 "stdlib/mprec.h"
union double_union
{
  double d;
  __uint32_t i[2];
};
# 259 "stdlib/mprec.h"
typedef struct _Bigint _Bigint;
# 282 "stdlib/mprec.h"
struct _reent ;
double _ulp (double x);
double _b2d (_Bigint *a , int *e);
_Bigint * _Balloc (struct _reent *p, int k);
void _Bfree (struct _reent *p, _Bigint *v);
_Bigint * _multadd (struct _reent *p, _Bigint *, int, int);
_Bigint * _s2b (struct _reent *, const char*, int, int, ULong);
_Bigint * _i2b (struct _reent *,int);
_Bigint * _multiply (struct _reent *, _Bigint *, _Bigint *);
_Bigint * _pow5mult (struct _reent *, _Bigint *, int k);
int _hi0bits (ULong);
int _lo0bits (ULong *);
_Bigint * _d2b (struct _reent *p, double d, int *e, int *bits);
_Bigint * _lshift (struct _reent *p, _Bigint *b, int k);
_Bigint * __mdiff (struct _reent *p, _Bigint *a, _Bigint *b);
int __mcmp (_Bigint *a, _Bigint *b);

double _ratio (_Bigint *a, _Bigint *b);
# 308 "stdlib/mprec.h"
extern const double __mprec_tinytens[];
extern const double __mprec_bigtens[];
extern const double __mprec_tens[];


double _mprec_log10 (int);
# 88 "stdlib/mprec.c" 2




_Bigint *
_Balloc(struct _reent *ptr , int k)
{
  int x;
  _Bigint *rv ;

  if (ptr->_freelist == ((void *)0))
    {

      ptr->_freelist = (struct _Bigint **) _calloc_r (ptr,
            sizeof (struct _Bigint *),
            15 + 1);
      if (ptr->_freelist == ((void *)0))
 {
   return ((void *)0);
 }
    }

  if (rv = ptr->_freelist[k])
    {
      ptr->_freelist[k] = rv->_next;
    }
  else
    {
      x = 1 << k;

      rv = (_Bigint *) _calloc_r (ptr,
      1,
      sizeof (_Bigint) +
      (x-1) * sizeof(rv->_x));
      if (rv == ((void *)0)) return ((void *)0);
      rv->_k = k;
      rv->_maxwds = x;
    }
  rv->_sign = rv->_wds = 0;
  return rv;
}

void
_Bfree(struct _reent *ptr , _Bigint * v)
{
  if (v)
    {
      v->_next = ptr->_freelist[v->_k];
      ptr->_freelist[v->_k] = v;
    }
}

_Bigint *
_multadd(struct _reent *ptr , _Bigint * b , int m , int a)




{
  int i, wds;
  ULong *x, y;

  ULong xi, z;

  _Bigint *b1;

  wds = b->_wds;
  x = b->_x;
  i = 0;
  do
    {

      xi = *x;
      y = (xi & 0xffff) * m + a;
      z = (xi >> 16) * m + (y >> 16);
      a = (int) (z >> 16);
      *x++ = (z << 16) + (y & 0xffff);





    }
  while (++i < wds);
  if (a)
    {
      if (wds >= b->_maxwds)
 {
   b1 = _Balloc (ptr, b->_k + 1);
   memcpy((char *)&b1->_sign, (char *)&b->_sign, b->_wds*sizeof(__int32_t) + 2*sizeof(int));
   _Bfree (ptr, b);
   b = b1;
 }
      b->_x[wds++] = a;
      b->_wds = wds;
    }
  return b;
}

_Bigint *
_s2b(struct _reent * ptr , const char *s , int nd0 , int nd , ULong y9)





{
  _Bigint *b;
  int i, k;
  __int32_t x, y;

  x = (nd + 8) / 9;
  for (k = 0, y = 1; x > y; y <<= 1, k++);

  b = _Balloc (ptr, k);
  b->_x[0] = y9;
  b->_wds = 1;






  i = 9;
  if (9 < nd0)
    {
      s += 9;
      do
 b = _multadd (ptr, b, 10, *s++ - '0');
      while (++i < nd0);
      s++;
    }
  else
    s += 10;
  for (; i < nd; i++)
    b = _multadd (ptr, b, 10, *s++ - '0');
  return b;
}

int
_hi0bits(register ULong x)

{
  register int k = 0;

  if (!(x & 0xffff0000))
    {
      k = 16;
      x <<= 16;
    }
  if (!(x & 0xff000000))
    {
      k += 8;
      x <<= 8;
    }
  if (!(x & 0xf0000000))
    {
      k += 4;
      x <<= 4;
    }
  if (!(x & 0xc0000000))
    {
      k += 2;
      x <<= 2;
    }
  if (!(x & 0x80000000))
    {
      k++;
      if (!(x & 0x40000000))
 return 32;
    }
  return k;
}

int
_lo0bits(ULong *y)
{
  register int k;
  register ULong x = *y;

  if (x & 7)
    {
      if (x & 1)
 return 0;
      if (x & 2)
 {
   *y = x >> 1;
   return 1;
 }
      *y = x >> 2;
      return 2;
    }
  k = 0;
  if (!(x & 0xffff))
    {
      k = 16;
      x >>= 16;
    }
  if (!(x & 0xff))
    {
      k += 8;
      x >>= 8;
    }
  if (!(x & 0xf))
    {
      k += 4;
      x >>= 4;
    }
  if (!(x & 0x3))
    {
      k += 2;
      x >>= 2;
    }
  if (!(x & 1))
    {
      k++;
      x >>= 1;
      if (!x & 1)
 return 32;
    }
  *y = x;
  return k;
}

_Bigint *
_i2b(struct _reent * ptr , int i)
{
  _Bigint *b;

  b = _Balloc (ptr, 1);
  b->_x[0] = i;
  b->_wds = 1;
  return b;
}

_Bigint *
_multiply(struct _reent * ptr , _Bigint * a , _Bigint * b)
{
  _Bigint *c;
  int k, wa, wb, wc;
  ULong carry, y, z;
  ULong *x, *xa, *xae, *xb, *xbe, *xc, *xc0;

  ULong z2;


  if (a->_wds < b->_wds)
    {
      c = a;
      a = b;
      b = c;
    }
  k = a->_k;
  wa = a->_wds;
  wb = b->_wds;
  wc = wa + wb;
  if (wc > a->_maxwds)
    k++;
  c = _Balloc (ptr, k);
  for (x = c->_x, xa = x + wc; x < xa; x++)
    *x = 0;
  xa = a->_x;
  xae = xa + wa;
  xb = b->_x;
  xbe = xb + wb;
  xc0 = c->_x;

  for (; xb < xbe; xb++, xc0++)
    {
      if (y = *xb & 0xffff)
 {
   x = xa;
   xc = xc0;
   carry = 0;
   do
     {
       z = (*x & 0xffff) * y + (*xc & 0xffff) + carry;
       carry = z >> 16;
       z2 = (*x++ >> 16) * y + (*xc >> 16) + carry;
       carry = z2 >> 16;
       (((unsigned short *)xc)[0] = (unsigned short)z2, ((unsigned short *)xc)[1] = (unsigned short)z, xc++);
     }
   while (x < xae);
   *xc = carry;
 }
      if (y = *xb >> 16)
 {
   x = xa;
   xc = xc0;
   carry = 0;
   z2 = *xc;
   do
     {
       z = (*x & 0xffff) * y + (*xc >> 16) + carry;
       carry = z >> 16;
       (((unsigned short *)xc)[0] = (unsigned short)z, ((unsigned short *)xc)[1] = (unsigned short)z2, xc++);
       z2 = (*x++ >> 16) * y + (*xc & 0xffff) + carry;
       carry = z2 >> 16;
     }
   while (x < xae);
   *xc = z2;
 }
    }
# 410 "stdlib/mprec.c"
  for (xc0 = c->_x, xc = xc0 + wc; wc > 0 && !*--xc; --wc);
  c->_wds = wc;
  return c;
}

_Bigint *
_pow5mult(struct _reent * ptr , _Bigint * b , int k)

{
  _Bigint *b1, *p5, *p51;
  int i;
  static const int p05[3] = {5, 25, 125};

  if (i = k & 3)
    b = _multadd (ptr, b, p05[i - 1], 0);

  if (!(k >>= 2))
    return b;
  if (!(p5 = ptr->_p5s))
    {

      p5 = ptr->_p5s = _i2b (ptr, 625);
      p5->_next = 0;
    }
  for (;;)
    {
      if (k & 1)
 {
   b1 = _multiply (ptr, b, p5);
   _Bfree (ptr, b);
   b = b1;
 }
      if (!(k >>= 1))
 break;
      if (!(p51 = p5->_next))
 {
   p51 = p5->_next = _multiply (ptr, p5, p5);
   p51->_next = 0;
 }
      p5 = p51;
    }
  return b;
}

_Bigint *
_lshift(struct _reent * ptr , _Bigint * b , int k)
{
  int i, k1, n, n1;
  _Bigint *b1;
  ULong *x, *x1, *xe, z;


  n = k >> 5;



  k1 = b->_k;
  n1 = n + b->_wds + 1;
  for (i = b->_maxwds; n1 > i; i <<= 1)
    k1++;
  b1 = _Balloc (ptr, k1);
  x1 = b1->_x;
  for (i = 0; i < n; i++)
    *x1++ = 0;
  x = b->_x;
  xe = x + b->_wds;

  if (k &= 0x1f)
    {
      k1 = 32 - k;
      z = 0;
      do
 {
   *x1++ = *x << k | z;
   z = *x++ >> k1;
 }
      while (x < xe);
      if (*x1 = z)
 ++n1;
    }
# 505 "stdlib/mprec.c"
  else
    do
      *x1++ = *x++;
    while (x < xe);
  b1->_wds = n1 - 1;
  _Bfree (ptr, b);
  return b1;
}

int
__mcmp(_Bigint * a , _Bigint * b)
{
  ULong *xa, *xa0, *xb, *xb0;
  int i, j;

  i = a->_wds;
  j = b->_wds;






  if (i -= j)
    return i;
  xa0 = a->_x;
  xa = xa0 + j;
  xb0 = b->_x;
  xb = xb0 + j;
  for (;;)
    {
      if (*--xa != *--xb)
 return *xa < *xb ? -1 : 1;
      if (xa <= xa0)
 break;
    }
  return 0;
}

_Bigint *
__mdiff(struct _reent * ptr , _Bigint * a , _Bigint * b)

{
  _Bigint *c;
  int i, wa, wb;
  __int32_t borrow, y;
  ULong *xa, *xae, *xb, *xbe, *xc;

  __int32_t z;


  i = __mcmp (a, b);
  if (!i)
    {
      c = _Balloc (ptr, 0);
      c->_wds = 1;
      c->_x[0] = 0;
      return c;
    }
  if (i < 0)
    {
      c = a;
      a = b;
      b = c;
      i = 1;
    }
  else
    i = 0;
  c = _Balloc (ptr, a->_k);
  c->_sign = i;
  wa = a->_wds;
  xa = a->_x;
  xae = xa + wa;
  wb = b->_wds;
  xb = b->_x;
  xbe = xb + wb;
  xc = c->_x;
  borrow = 0;

  do
    {
      y = (*xa & 0xffff) - (*xb & 0xffff) + borrow;
      borrow = y >> 16;
      ;
      z = (*xa++ >> 16) - (*xb++ >> 16) + borrow;
      borrow = z >> 16;
      ;
      (((unsigned short *)xc)[0] = (unsigned short)z, ((unsigned short *)xc)[1] = (unsigned short)y, xc++);
    }
  while (xb < xbe);
  while (xa < xae)
    {
      y = (*xa & 0xffff) + borrow;
      borrow = y >> 16;
      ;
      z = (*xa++ >> 16) + borrow;
      borrow = z >> 16;
      ;
      (((unsigned short *)xc)[0] = (unsigned short)z, ((unsigned short *)xc)[1] = (unsigned short)y, xc++);
    }
# 622 "stdlib/mprec.c"
  while (!*--xc)
    wa--;
  c->_wds = wa;
  return c;
}

double
_ulp(double _x)
{
  union double_union x, a;
  register __int32_t L;

  x.d = _x;

  L = ((x.i[0]) & ((__uint32_t)0x7ff00000L)) - (53 - 1) * ((__uint32_t)0x100000L);

  if (L > 0)
    {




      (a.i[0]) = L;

      (a.i[1]) = 0;



    }
  else
    {
      L = -L >> 20;
      if (L < 20)
 {
   (a.i[0]) = 0x80000 >> L;

   (a.i[1]) = 0;

 }
      else
 {
   (a.i[0]) = 0;
   L -= 20;

   (a.i[1]) = L >= 31 ? 1 : 1 << 31 - L;

 }
    }

  return a.d;
}

double
_b2d(_Bigint * a , int *e)

{
  ULong *xa, *xa0, w, y, z;
  int k;
  union double_union d;







  xa0 = a->_x;
  xa = xa0 + a->_wds;
  y = *--xa;




  k = _hi0bits (y);
  *e = 32 - k;

  if (k < 11)
    {
      (d.i[0]) = ((__uint32_t)0x3ff00000L) | y >> 11 - k;
      w = xa > xa0 ? *--xa : 0;

      (d.i[1]) = y << (32 - 11) + k | w >> 11 - k;

      goto ret_d;
    }
  z = xa > xa0 ? *--xa : 0;
  if (k -= 11)
    {
      (d.i[0]) = ((__uint32_t)0x3ff00000L) | y << k | z >> 32 - k;
      y = xa > xa0 ? *--xa : 0;

      (d.i[1]) = z << k | y >> 32 - k;

    }
  else
    {
      (d.i[0]) = ((__uint32_t)0x3ff00000L) | y;

      (d.i[1]) = z;

    }
# 740 "stdlib/mprec.c"
ret_d:







  return d.d;
}

_Bigint *
_d2b(struct _reent * ptr , double _d , int *e , int *bits)






{
  union double_union d;
  _Bigint *b;
  int de, i, k;
  ULong *x, y, z;
# 772 "stdlib/mprec.c"
  d.d = _d;



  b = _Balloc (ptr, 1);



  x = b->_x;

  z = (d.i[0]) & ((__uint32_t)0xfffffL);
  (d.i[0]) &= 0x7fffffff;






  if (de = (int) ((d.i[0]) >> 20))
    z |= ((__uint32_t)0x100000L);



  if (y = (d.i[1]))
    {
      if (k = _lo0bits (&y))
 {
   x[0] = y | z << 32 - k;
   z >>= k;
 }
      else
 x[0] = y;
      i = b->_wds = (x[1] = z) ? 2 : 1;
    }
  else

    {




      k = _lo0bits (&z);
      x[0] = z;
      i = b->_wds = 1;

      k += 32;

    }
# 873 "stdlib/mprec.c"
  if (de)
    {





      *e = de - 1023 - (53 - 1) + k;
      *bits = 53 - k;


    }
  else
    {
      *e = de - 1023 - (53 - 1) + 1 + k;

      *bits = 32 * i - _hi0bits (x[i - 1]);



    }

  return b;
}



double
_ratio(_Bigint * a , _Bigint * b)

{
  union double_union da, db;
  int k, ka, kb;

  da.d = _b2d (a, &ka);
  db.d = _b2d (b, &kb);

  k = ka - kb + 32 * (a->_wds - b->_wds);
# 929 "stdlib/mprec.c"
  if (k > 0)
    (da.i[0]) += k * ((__uint32_t)0x100000L);
  else
    {
      k = -k;
      (db.i[0]) += k * ((__uint32_t)0x100000L);
    }

  return da.d / db.d;
}


const double
  __mprec_tens[] =
{
  1e0, 1e1, 1e2, 1e3, 1e4, 1e5, 1e6, 1e7, 1e8, 1e9,
  1e10, 1e11, 1e12, 1e13, 1e14, 1e15, 1e16, 1e17, 1e18, 1e19,
  1e20, 1e21, 1e22, 1e23, 1e24

};


const double __mprec_bigtens[] =
{1e16, 1e32, 1e64, 1e128, 1e256};

const double __mprec_tinytens[] =
{1e-16, 1e-32, 1e-64, 1e-128, 1e-256};
# 965 "stdlib/mprec.c"
double
_mprec_log10(int dig)

{
  double v = 1.0;
  if (dig < 24)
    return __mprec_tens[dig];
  while (dig > 0)
    {
      v *= 10;
      dig--;
    }
  return v;
}
