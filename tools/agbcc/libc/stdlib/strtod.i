# 0 "stdlib/strtod.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "stdlib/strtod.c"
# 100 "stdlib/strtod.c"
# 1 "include/_ansi.h" 1
# 15 "include/_ansi.h"
# 1 "include/sys/config.h" 1
# 103 "include/sys/config.h"
typedef int __int32_t;
typedef unsigned int __uint32_t;
# 16 "include/_ansi.h" 2
# 101 "stdlib/strtod.c" 2
# 1 "include/reent.h" 1
# 48 "include/reent.h"
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
# 102 "stdlib/strtod.c" 2
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
# 103 "stdlib/strtod.c" 2
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
# 104 "stdlib/strtod.c" 2

double
_strtod_r(struct _reent *ptr , const char *s00 , char **se)



{
  int bb2, bb5, bbe, bd2, bd5, bbbits, bs2, c, dsign, e1, esign, i, j,
    k, nd, nd0, nf, nz, nz0, sign;
  long e;
  const char *s, *s0, *s1;
  double aadj, aadj1, adj;
  long L;
  unsigned long z;
  ULong y;
  union double_union rv, rv0;

  _Bigint *bb, *bb1, *bd, *bd0, *bs, *delta;
  sign = nz0 = nz = 0;
  rv.d = 0.;
  for (s = s00;; s++)
    switch (*s)
      {
      case '-':
 sign = 1;

      case '+':
 if (*++s)
   goto break2;

      case 0:
 s = s00;
 goto ret;
      case '\t':
      case '\n':
      case '\v':
      case '\f':
      case '\r':
      case ' ':
 continue;
      default:
 goto break2;
      }
break2:
  if (*s == '0')
    {
      nz0 = 1;
      while (*++s == '0');
      if (!*s)
 goto ret;
    }
  s0 = s;
  y = z = 0;
  for (nd = nf = 0; (c = *s) >= '0' && c <= '9'; nd++, s++)
    if (nd < 9)
      y = 10 * y + c - '0';
    else if (nd < 16)
      z = 10 * z + c - '0';
  nd0 = nd;
  if (c == '.')
    {
      c = *++s;
      if (!nd)
 {
   for (; c == '0'; c = *++s)
     nz++;
   if (c > '0' && c <= '9')
     {
       s0 = s;
       nf += nz;
       nz = 0;
       goto have_dig;
     }
   goto dig_done;
 }
      for (; c >= '0' && c <= '9'; c = *++s)
 {
 have_dig:
   nz++;
   if (c -= '0')
     {
       nf += nz;
       for (i = 1; i < nz; i++)
  if (nd++ < 9)
    y *= 10;
  else if (nd <= 15 + 1)
    z *= 10;
       if (nd++ < 9)
  y = 10 * y + c;
       else if (nd <= 15 + 1)
  z = 10 * z + c;
       nz = 0;
     }
 }
    }
dig_done:
  e = 0;
  if (c == 'e' || c == 'E')
    {
      if (!nd && !nz && !nz0)
 {
   s = s00;
   goto ret;
 }
      s00 = s;
      esign = 0;
      switch (c = *++s)
 {
 case '-':
   esign = 1;
 case '+':
   c = *++s;
 }
      if (c >= '0' && c <= '9')
 {
   while (c == '0')
     c = *++s;
   if (c > '0' && c <= '9')
     {
       e = c - '0';
       s1 = s;
       while ((c = *++s) >= '0' && c <= '9')
  e = 10 * e + c - '0';
       if (s - s1 > 8)



  e = 9999999L;
       if (esign)
  e = -e;
     }
   else
     e = 0;
 }
      else
 s = s00;
    }
  if (!nd)
    {
      if (!nz && !nz0)
 s = s00;
      goto ret;
    }
  e1 = e -= nf;






  if (!nd0)
    nd0 = nd;
  k = nd < 15 + 1 ? nd : 15 + 1;
  rv.d = y;
  if (k > 9)
    rv.d = __mprec_tens[k - 9] * rv.d + z;
  bd0 = 0;
  if (nd <= 15

      && 1 == 1

    )
    {
      if (!e)
 goto ret;
      if (e > 0)
 {
   if (e <= 22)
     {



                    rv.d *= __mprec_tens[e];
       goto ret;

     }
   i = 15 - nd;
   if (e <= 22 + i)
     {



       e -= i;
       rv.d *= __mprec_tens[i];
# 300 "stdlib/strtod.c"
                    rv.d *= __mprec_tens[e];

       goto ret;
     }
 }

      else if (e >= -22)
 {
                rv.d /= __mprec_tens[-e];
   goto ret;
 }

    }
  e1 += nd - k;



  if (e1 > 0)
    {
      if (i = e1 & 15)
 rv.d *= __mprec_tens[i];
      if (e1 &= ~15)
 {
   if (e1 > 308)
     {
     ovfl:
       ptr->_errno = 34;

       rv.d = (__infinity.d);
# 343 "stdlib/strtod.c"
       if (bd0)
  goto retfree;
       goto ret;
     }
   if (e1 >>= 4)
     {
       for (j = 0; e1 > 1; j++, e1 >>= 1)
  if (e1 & 1)
    rv.d *= __mprec_bigtens[j];

       (rv.i[0]) -= 53 * ((__uint32_t)0x100000L);
       rv.d *= __mprec_bigtens[j];
       if ((z = (rv.i[0]) & ((__uint32_t)0x7ff00000L))
    > ((__uint32_t)0x100000L) * (1024 + 1023 - 53))
  goto ovfl;
       if (z > ((__uint32_t)0x100000L) * (1024 + 1023 - 1 - 53))
  {


    (rv.i[0]) = (((__uint32_t)0xfffffL) | ((__uint32_t)0x100000L)*(1024 +1023 -1));

    (rv.i[1]) = ((__uint32_t)0xffffffffL);

  }
       else
  (rv.i[0]) += 53 * ((__uint32_t)0x100000L);
     }

 }
    }
  else if (e1 < 0)
    {
      e1 = -e1;
      if (i = e1 & 15)
 rv.d /= __mprec_tens[i];
      if (e1 &= ~15)
 {
   e1 >>= 4;
   if (e1 >= 1 << 5)
            goto undfl;
   for (j = 0; e1 > 1; j++, e1 >>= 1)
     if (e1 & 1)
       rv.d *= __mprec_tinytens[j];

   rv0.d = rv.d;
   rv.d *= __mprec_tinytens[j];
   if (!rv.d)
     {
       rv.d = 2. * rv0.d;
       rv.d *= __mprec_tinytens[j];
       if (!rv.d)
  {
  undfl:
    rv.d = 0.;
    ptr->_errno = 34;
    if (bd0)
      goto retfree;
    goto ret;
  }

       (rv.i[0]) = 0;
       (rv.i[1]) = 1;






     }
 }
    }





  bd0 = _s2b (ptr, s0, nd0, nd, y);

  for (;;)
    {
      bd = _Balloc (ptr, bd0->_k);
      memcpy((char *)&bd->_sign, (char *)&bd0->_sign, bd0->_wds*sizeof(__int32_t) + 2*sizeof(int));
      bb = _d2b (ptr, rv.d, &bbe, &bbbits);
      bs = _i2b (ptr, 1);

      if (e >= 0)
 {
   bb2 = bb5 = 0;
   bd2 = bd5 = e;
 }
      else
 {
   bb2 = bb5 = -e;
   bd2 = bd5 = 0;
 }
      if (bbe >= 0)
 bb2 += bbe;
      else
 bd2 -= bbe;
      bs2 = bb2;







      i = bbe + bbbits - 1;
      if (i < (-1022))
 j = bbe + (53 - (-1022));
      else
 j = 53 + 1 - bbbits;

      bb2 += j;
      bd2 += j;
      i = bb2 < bd2 ? bb2 : bd2;
      if (i > bs2)
 i = bs2;
      if (i > 0)
 {
   bb2 -= i;
   bd2 -= i;
   bs2 -= i;
 }
      if (bb5 > 0)
 {
   bs = _pow5mult (ptr, bs, bb5);
   bb1 = _multiply (ptr, bs, bb);
   _Bfree (ptr, bb);
   bb = bb1;
 }
      if (bb2 > 0)
 bb = _lshift (ptr, bb, bb2);
      if (bd5 > 0)
 bd = _pow5mult (ptr, bd, bd5);
      if (bd2 > 0)
 bd = _lshift (ptr, bd, bd2);
      if (bs2 > 0)
 bs = _lshift (ptr, bs, bs2);
      delta = __mdiff (ptr, bb, bd);
      dsign = delta->_sign;
      delta->_sign = 0;
      i = __mcmp (delta, bs);
      if (i < 0)
 {



   if (dsign || (rv.i[1]) || (rv.i[0]) & ((__uint32_t)0xfffffL))
     break;
   delta = _lshift (ptr, delta, 1);
   if (__mcmp (delta, bs) > 0)
     goto drop_down;
   break;
 }
      if (i == 0)
 {

   if (dsign)
     {
       if (((rv.i[0]) & ((__uint32_t)0xfffffL)) == ((__uint32_t)0xfffffL)
    && (rv.i[1]) == 0xffffffff)
  {

    (rv.i[0]) = ((rv.i[0]) & ((__uint32_t)0x7ff00000L))
      + ((__uint32_t)0x100000L)



      ;

    (rv.i[1]) = 0;

    break;
  }
     }
   else if (!((rv.i[0]) & ((__uint32_t)0xfffffL)) && !(rv.i[1]))
     {
     drop_down:
# 533 "stdlib/strtod.c"
       L = ((rv.i[0]) & ((__uint32_t)0x7ff00000L)) - ((__uint32_t)0x100000L);

       (rv.i[0]) = L | ((__uint32_t)0xfffffL);

       (rv.i[1]) = 0xffffffff;




       break;

     }

   if (!((rv.i[1]) & 1))
     break;

   if (dsign)
     rv.d += _ulp (rv.d);

   else
     {
       rv.d -= _ulp (rv.d);

       if (!rv.d)
  goto undfl;

     }

   break;
 }
      if ((aadj = _ratio (delta, bs)) <= 2.)
 {
   if (dsign)
     aadj = aadj1 = 1.;
   else if ((rv.i[1]) || (rv.i[0]) & ((__uint32_t)0xfffffL))
     {

       if ((rv.i[1]) == 1 && !(rv.i[0]))
  goto undfl;

       aadj = 1.;
       aadj1 = -1.;
     }
   else
     {



       if (aadj < 2. / 2)
  aadj = 1. / 2;
       else
  aadj *= 0.5;
       aadj1 = -aadj;
     }
 }
      else
 {
   aadj *= 0.5;
   aadj1 = dsign ? aadj : -aadj;
# 603 "stdlib/strtod.c"
   if (1 == 0)
     aadj1 += 0.5;

 }
      y = (rv.i[0]) & ((__uint32_t)0x7ff00000L);



      if (y == ((__uint32_t)0x100000L) * (1024 + 1023 - 1))
 {
   rv0.d = rv.d;
   (rv.i[0]) -= 53 * ((__uint32_t)0x100000L);
   adj = aadj1 * _ulp (rv.d);
   rv.d += adj;
   if (((rv.i[0]) & ((__uint32_t)0x7ff00000L)) >=
       ((__uint32_t)0x100000L) * (1024 + 1023 - 53))
     {
       if ((rv0.i[0]) == (((__uint32_t)0xfffffL) | ((__uint32_t)0x100000L)*(1024 +1023 -1)) && (rv0.i[1]) == ((__uint32_t)0xffffffffL))
  goto ovfl;



       (rv.i[0]) = (((__uint32_t)0xfffffL) | ((__uint32_t)0x100000L)*(1024 +1023 -1));
       (rv.i[1]) = ((__uint32_t)0xffffffffL);

       goto cont;
     }
   else
     (rv.i[0]) += 53 * ((__uint32_t)0x100000L);
 }
      else
 {
# 671 "stdlib/strtod.c"
   if (y <= (53 - 1) * ((__uint32_t)0x100000L) && aadj >= 1.)
     {
       aadj1 = (double) (int) (aadj + 0.5);
       if (!dsign)
  aadj1 = -aadj1;
     }
   adj = aadj1 * _ulp (rv.d);
   rv.d += adj;

 }
      z = (rv.i[0]) & ((__uint32_t)0x7ff00000L);
      if (y == z)
 {

   L = aadj;
   aadj -= L;

   if (dsign || (rv.i[1]) || (rv.i[0]) & ((__uint32_t)0xfffffL))
     {
       if (aadj < .4999999 || aadj > .5000001)
  break;
     }
   else if (aadj < .4999999 / 2)
     break;
 }
    cont:
      _Bfree (ptr, bb);
      _Bfree (ptr, bd);
      _Bfree (ptr, bs);
      _Bfree (ptr, delta);
    }
retfree:
  _Bfree (ptr, bb);
  _Bfree (ptr, bd);
  _Bfree (ptr, bs);
  _Bfree (ptr, bd0);
  _Bfree (ptr, delta);
ret:
  if (se)
    *se = (char *) s;
  return sign ? -rv.d : rv.d;
}



double
strtod(const char *s00 , char **se)

{
  return _strtod_r (_impure_ptr, s00, se);
}

float
strtodf(const char *s00 , char **se)


{
  return strtod (s00, se);
}
