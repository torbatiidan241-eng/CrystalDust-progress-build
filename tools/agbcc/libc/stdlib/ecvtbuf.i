# 0 "stdlib/ecvtbuf.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "stdlib/ecvtbuf.c"
# 70 "stdlib/ecvtbuf.c"
# 1 "include/_ansi.h" 1
# 15 "include/_ansi.h"
# 1 "include/sys/config.h" 1
# 103 "include/sys/config.h"
typedef int __int32_t;
typedef unsigned int __uint32_t;
# 16 "include/_ansi.h" 2
# 71 "stdlib/ecvtbuf.c" 2
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
# 72 "stdlib/ecvtbuf.c" 2
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
# 73 "stdlib/ecvtbuf.c" 2
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
# 74 "stdlib/ecvtbuf.c" 2
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
# 75 "stdlib/ecvtbuf.c" 2
# 1 "stdlib/local.h" 1





char * _gcvt (struct _reent *, double , int , char *, char, int);
# 76 "stdlib/ecvtbuf.c" 2

static void
print_f(struct _reent *ptr , char *buf , double invalue , int ndigit , char type , int dot , int mode)







{
  int decpt;
  int sign;
  char *p, *start, *end;

  start = p = _dtoa_r (ptr, invalue, mode, ndigit, &decpt, &sign, &end);

  if (decpt == 9999)
    {
      strcpy (buf, p);
      return;
    }
  while (*p && decpt > 0)
    {
      *buf++ = *p++;
      decpt--;
    }

  while (decpt > 0)
    {
      *buf++ = '0';
      decpt--;
    }

  if (dot || *p)
    {
      if (p == start)
 *buf++ = '0';
      *buf++ = '.';
      while (decpt < 0 && ndigit > 0)
 {
   *buf++ = '0';
   decpt++;
   ndigit--;
 }


      while (*p && ndigit > 0)
 {
   *buf++ = *p++;
   ndigit--;
 }

      while (ndigit > 0)
 {
   *buf++ = '0';
   ndigit--;
 }
    }
  *buf++ = 0;
}
# 145 "stdlib/ecvtbuf.c"
static void
print_e(struct _reent *ptr , char *buf , double invalue , int width , char type , int dot)






{
  int dp;
  int sign;
  char *end;
  char *p;
  int decpt;
  int top;
  int ndigit = width;

  p = _dtoa_r (ptr, invalue, 2, width + 1, &decpt, &sign, &end);

  if (decpt == 9999)
    {
      strcpy (buf, p);
      return;
    }

  *buf++ = *p++;
  if (dot || ndigit != 0)
    *buf++ = '.';

  while (*p && ndigit > 0)
    {
      *buf++ = *p++;
      ndigit--;
    }




  if (type == 'g')
    type = 'e';
  else if (type == 'G')
    type = 'E';
  else
    {
      while (ndigit > 0)
 {
   *buf++ = '0';
   ndigit--;
 }
    }



  *buf++ = type;
  decpt--;
  if (decpt < 0)
    {
      *buf++ = '-';
      decpt = -decpt;
    }
  else
    {
      *buf++ = '+';
    }
  if (decpt > 99)
    {
      int top = decpt / 100;
      *buf++ = top + '0';
      decpt -= top * 100;
    }
  top = decpt / 10;
  *buf++ = top + '0';
  decpt -= top * 10;
  *buf++ = decpt + '0';

  *buf++ = 0;
}







char *
fcvtbuf(double invalue , int ndigit , int *decpt , int *sign , char *fcvt_buf)





{
  char *save;
  char *p;
  char *end;
  int done = 0;

  if (fcvt_buf == ((void *)0))
    {
      if (_impure_ptr->_cvtlen <= ndigit)
 {
   if ((fcvt_buf = (char *) _realloc_r (_impure_ptr, _impure_ptr->_cvtbuf,
            ndigit + 1)) == ((void *)0))
     return ((void *)0);
   _impure_ptr->_cvtlen = ndigit + 1;
   _impure_ptr->_cvtbuf = fcvt_buf;
 }

      fcvt_buf = _impure_ptr->_cvtbuf ;
    }

  save = fcvt_buf;

  if (invalue < 1.0 && invalue > -1.0)
    {
      p = _dtoa_r (_impure_ptr, invalue, 2, ndigit, decpt, sign, &end);
    }
  else
    {
      p = _dtoa_r (_impure_ptr, invalue, 3, ndigit, decpt, sign, &end);
    }



  while (p < end)
    {
      *fcvt_buf++ = *p++;
      done++;
    }

  while (done < ndigit)
    {
      *fcvt_buf++ = '0';
      done++;
    }
  *fcvt_buf++ = 0;
  return save;
}

char *
ecvtbuf(double invalue , int ndigit , int *decpt , int *sign , char *fcvt_buf)





{
  char *save;
  char *p;
  char *end;
  int done = 0;

  if (fcvt_buf == ((void *)0))
    {
      if (_impure_ptr->_cvtlen <= ndigit)
 {
   if ((fcvt_buf = (char *) _realloc_r (_impure_ptr, _impure_ptr->_cvtbuf,
            ndigit + 1)) == ((void *)0))
     return ((void *)0);
   _impure_ptr->_cvtlen = ndigit + 1;
   _impure_ptr->_cvtbuf = fcvt_buf;
 }

      fcvt_buf = _impure_ptr->_cvtbuf ;
    }

  save = fcvt_buf;

  p = _dtoa_r (_impure_ptr, invalue, 2, ndigit, decpt, sign, &end);



  while (p < end)
    {
      *fcvt_buf++ = *p++;
      done++;
    }

  while (done < ndigit)
    {
      *fcvt_buf++ = '0';
      done++;
    }
  *fcvt_buf++ = 0;
  return save;
}



char *
_gcvt(struct _reent *ptr , double invalue , int ndigit , char *buf , char type , int dot)






{
  char *save = buf;

  if (invalue < 0)
    {
      invalue = -invalue;
    }

  if (invalue == 0)
    {
      *buf++ = '0';
      *buf = '\0';
    }
  else





  if (0.0001 >= invalue || invalue >= _mprec_log10 (ndigit))
    {







      print_e (ptr, buf, invalue, ndigit - 1, type, dot);
    }
  else
    {
      int decpt;
      int sign;
      char *end;
      char *p;

      if (invalue < 1.0)
 {

   p = _dtoa_r (ptr, invalue, 3, ndigit, &decpt, &sign, &end);
 }
      else
 {
   p = _dtoa_r (ptr, invalue, 2, ndigit, &decpt, &sign, &end);
 }

      if (decpt == 9999)
 {
   strcpy (buf, p);
   return save;
 }
      while (*p && decpt > 0)
 {
   *buf++ = *p++;
   decpt--;
   ndigit--;
 }

      while (decpt > 0 && ndigit > 0)
 {
   *buf++ = '0';
   decpt--;
   ndigit--;
 }

      if (dot || *p)
 {
   if (buf == save)
     *buf++ = '0';
   *buf++ = '.';
   while (decpt < 0 && ndigit > 0)
     {
       *buf++ = '0';
       decpt++;
       ndigit--;
     }


   while (*p && ndigit > 0)
     {
       *buf++ = *p++;
       ndigit--;
     }

   if (dot)
     {
       while (ndigit > 0)
  {
    *buf++ = '0';
    ndigit--;
  }
     }
 }
      *buf++ = 0;
    }

  return save;
}

char *
_dcvt(struct _reent *ptr , char *buffer , double invalue , int precision , int width , char type , int dot)







{
  switch (type)
    {
    case 'f':
    case 'F':
      print_f (ptr, buffer, invalue, precision, type, precision == 0 ? dot : 1, 3);
      break;
    case 'g':
    case 'G':
      if (precision == 0)
 precision = 1;
      _gcvt (ptr, invalue, precision, buffer, type, dot);
      break;
    case 'e':
    case 'E':
      print_e (ptr, buffer, invalue, precision, type, dot);
    }
  return buffer;
}
