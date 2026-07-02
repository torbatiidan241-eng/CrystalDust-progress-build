# 0 "stdio/vfprintf.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "stdio/vfprintf.c"
# 143 "stdio/vfprintf.c"
# 1 "include/_ansi.h" 1
# 15 "include/_ansi.h"
# 1 "include/sys/config.h" 1
# 103 "include/sys/config.h"
typedef int __int32_t;
typedef unsigned int __uint32_t;
# 16 "include/_ansi.h" 2
# 144 "stdio/vfprintf.c" 2
# 1 "include/stdio.h" 1
# 32 "include/stdio.h"
# 1 "include/_ansi.h" 1
# 33 "include/stdio.h" 2




# 1 "../ginclude/stddef.h" 1





typedef long int ptrdiff_t;



typedef unsigned long int size_t;






typedef int wchar_t;
# 38 "include/stdio.h" 2


# 1 "../ginclude/stdarg.h" 1
# 9 "../ginclude/stdarg.h"
typedef void *__gnuc_va_list;
# 31 "../ginclude/stdarg.h"
typedef __gnuc_va_list va_list;
# 41 "include/stdio.h" 2







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
# 145 "stdio/vfprintf.c" 2
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
# 146 "stdio/vfprintf.c" 2
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
# 147 "stdio/vfprintf.c" 2
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
# 148 "stdio/vfprintf.c" 2







# 1 "stdio/local.h" 1
# 28 "stdio/local.h"
# 1 "include/unistd.h" 1



# 1 "include/sys/unistd.h" 1
# 9 "include/sys/unistd.h"
# 1 "include/sys/types.h" 1
# 49 "include/sys/types.h"
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;


typedef unsigned short ushort;
typedef unsigned int uint;







typedef long daddr_t;
typedef char * caddr_t;







typedef unsigned short ino_t;
# 101 "include/sys/types.h"
typedef short dev_t;

typedef long off_t;

typedef unsigned short uid_t;
typedef unsigned short gid_t;
typedef int pid_t;
typedef long key_t;
typedef long ssize_t;
# 122 "include/sys/types.h"
typedef unsigned int mode_t __attribute__ ((__mode__ (__SI__)));



typedef unsigned short nlink_t;
# 146 "include/sys/types.h"
typedef long fd_mask;







typedef struct _types_fd_set {
 fd_mask fds_bits[(((64)+(((sizeof (fd_mask) * 8))-1))/((sizeof (fd_mask) * 8)))];
} _types_fd_set;
# 10 "include/sys/unistd.h" 2



extern char **environ;

void _exit (int __status ) __attribute__ ((noreturn));

int access (const char *__path, int __amode );
unsigned alarm (unsigned __secs );
int chdir (const char *__path );
int chmod (const char *__path, mode_t __mode );
int chown (const char *__path, uid_t __owner, gid_t __group );
int close (int __fildes );
char *ctermid (char *__s );
char *cuserid (char *__s );
int dup (int __fildes );
int dup2 (int __fildes, int __fildes2 );
int execl (const char *__path, const char *, ... );
int execle (const char *__path, const char *, ... );
int execlp (const char *__file, const char *, ... );
int execv (const char *__path, char * const __argv[] );
int execve (const char *__path, char * const __argv[], char * const __envp[] );
int execvp (const char *__file, char * const __argv[] );
pid_t fork (void );
long fpathconf (int __fd, int __name );
int fsync (int __fd);
char *getcwd (char *__buf, size_t __size );
gid_t getegid (void );
uid_t geteuid (void );
gid_t getgid (void );
int getgroups (int __gidsetsize, gid_t __grouplist[] );
char *getlogin (void );
char *getpass (__const char *__prompt);
size_t getpagesize (void);
pid_t getpgrp (void );
pid_t getpid (void );
pid_t getppid (void );
uid_t getuid (void );
int isatty (int __fildes );
int link (const char *__path1, const char *__path2 );
off_t lseek (int __fildes, off_t __offset, int __whence );
long pathconf (char *__path, int __name );
int pause (void );
int pipe (int __fildes[2] );
int read (int __fildes, void *__buf, size_t __nbyte );
int rmdir (const char *__path );
void * sbrk (size_t __incr);
int setgid (gid_t __gid );
int setpgid (pid_t __pid, pid_t __pgid );
pid_t setsid (void );
int setuid (uid_t __uid );
unsigned sleep (unsigned int __seconds );
void swab (const void *, void *, ssize_t);
long sysconf (int __name );
pid_t tcgetpgrp (int __fildes );
int tcsetpgrp (int __fildes, pid_t __pgrp_id );
char *ttyname (int __fildes );
int unlink (const char *__path );
int write (int __fildes, const void *__buf, size_t __nbyte );



int _close (int __fildes );
pid_t _fork (void );
pid_t _getpid (void );
int _link (const char *__path1, const char *__path2 );
off_t _lseek (int __fildes, off_t __offset, int __whence );
int _read (int __fildes, void *__buf, size_t __nbyte );
void * _sbrk (size_t __incr);
int _unlink (const char *__path );
int _write (int __fildes, const void *__buf, size_t __nbyte );
# 118 "include/sys/unistd.h"
long sysconf (int __name);
# 5 "include/unistd.h" 2
# 29 "stdio/local.h" 2

extern int __svfscanf (FILE *, const char *,va_list);
extern FILE *__sfp (struct _reent *);
extern int __sflags (struct _reent *,const char*, int*);
extern int __srefill (FILE *);
extern int __sread (void *, char *, int);
extern int __swrite (void *, char const *, int);
extern fpos_t __sseek (void *, fpos_t, int);
extern int __sclose (void *);
extern void __sinit (struct _reent *);
extern void _cleanup_r (struct _reent *);
extern void __smakebuf (FILE *);
extern int _fwalk (struct _reent *, int (*)(FILE *));
struct _glue * __sfmoreglue (struct _reent *,int n);
extern int __srefill (FILE *fp);
# 80 "stdio/local.h"
char *_dcvt (struct _reent *, char *, double, int, int, char, int);
char *_sicvt (char *, short, char);
char *_icvt (char *, int, char);
char *_licvt (char *, long, char);

char *_llicvt (char *, long long, char);
# 156 "stdio/vfprintf.c" 2
# 1 "stdio/fvwrite.h" 1
# 24 "stdio/fvwrite.h"
struct __siov {
 const void * iov_base;
 size_t iov_len;
};
struct __suio {
 struct __siov *uio_iov;
 int uio_iovcnt;
 int uio_resid;
};


extern int __sfvwrite (FILE *, struct __suio *);
extern int __swsetup (FILE *);
# 157 "stdio/vfprintf.c" 2
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
# 158 "stdio/vfprintf.c" 2





static int
__sprint(fp, uio)
 FILE *fp;
 register struct __suio *uio;
{
 register int err;

 if (uio->uio_resid == 0) {
  uio->uio_iovcnt = 0;
  return (0);
 }
 err = __sfvwrite(fp, uio);
 uio->uio_resid = 0;
 uio->uio_iovcnt = 0;
 return (err);
}






static int
__sbprintf(fp, fmt, ap)
 register FILE *fp;
 const char *fmt;
 va_list ap;
{
 int ret;
 FILE fake;
 unsigned char buf[1024];


 fake._data = fp->_data;
 fake._flags = fp->_flags & ~0x0002;
 fake._file = fp->_file;
 fake._cookie = fp->_cookie;
 fake._write = fp->_write;


 fake._bf._base = fake._p = buf;
 fake._bf._size = fake._w = sizeof(buf);
 fake._lbfsize = 0;


 ret = vfprintf(&fake, fmt, ap);
 if (ret >= 0 && fflush(&fake))
  ret = (-1);
 if (fake._flags & 0x0040)
  fp->_flags |= 0x0040;
 return (ret);
}



# 1 "include/locale.h" 1
# 26 "include/locale.h"
struct lconv
{
  char *decimal_point;
  char *thousands_sep;
  char *grouping;
  char *int_curr_symbol;
  char *currency_symbol;
  char *mon_decimal_point;
  char *mon_thousands_sep;
  char *mon_grouping;
  char *positive_sign;
  char *negative_sign;
  char int_frac_digits;
  char frac_digits;
  char p_cs_precedes;
  char p_sep_by_space;
  char n_cs_precedes;
  char n_sep_by_space;
  char p_sign_posn;
  char n_sign_posn;
};


char *setlocale (int category, const char *locale);
struct lconv *localeconv (void);


struct _reent;
char *_setlocale_r (struct _reent *, int category, const char *locale);
struct lconv *_localeconv_r (struct _reent *);
# 219 "stdio/vfprintf.c" 2
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
# 220 "stdio/vfprintf.c" 2
# 1 "stdio/floatio.h" 1
# 221 "stdio/vfprintf.c" 2




static char *cvt (struct _reent *, double, int, int, char *, int *, int, int *);
static int exponent (char *, int, int);
# 255 "stdio/vfprintf.c"
int
vfprintf(FILE * fp , const char *fmt0 , va_list ap)



{
  return _vfprintf_r (fp->_data, fp, fmt0, ap);
}

int
_vfprintf_r(struct _reent *data , FILE * fp , const char *fmt0 , va_list ap)




{
 register char *fmt;
 register int ch;
 register int n, m;
 register char *cp;
 register struct __siov *iovp;
 register int flags;
 int ret;
 int width;
 int prec;
 char sign;
 wchar_t wc;

 char *decimal_point = localeconv()->decimal_point;
 char softsign;
 double _double;
 int expt;
 int expsize;
 int ndig;
 char expstr[7];
# 300 "stdio/vfprintf.c"
 u_long _uquad;

 enum { OCT, DEC, HEX } base;
 int dprec;
 int realsz;
 int size;
 char *xdigs;

 struct __suio uio;
 struct __siov iov[8];
 char buf[(308 +39 +1)];
 char ox[2];
        int state = 0;







 static const char blanks[16] =
  {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
 static const char zeroes[16] =
  {'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0'};
# 381 "stdio/vfprintf.c"
 do { if ((fp)->_data == 0) (fp)->_data = _impure_ptr; if (!(fp)->_data->__sdidinit) __sinit ((fp)->_data); } while (0);


 if (((((fp)->_flags & 0x0008) == 0 || (fp)->_bf._base == ((void *)0)) && __swsetup(fp)))
  return ((-1));


 if ((fp->_flags & (0x0002|0x0008|0x0010)) == (0x0002|0x0008) &&
     fp->_file >= 0)
  return (__sbprintf(fp, fmt0, ap));

 fmt = (char *)fmt0;
 uio.uio_iov = iovp = iov;
 uio.uio_resid = 0;
 uio.uio_iovcnt = 0;
 ret = 0;




 for (;;) {
         cp = fmt;
         while ((n = _mbtowc_r(_impure_ptr, &wc, fmt, __mb_cur_max, &state)) > 0) {
   fmt += n;
   if (wc == '%') {
    fmt--;
    break;
   }
  }
  if ((m = fmt - cp) != 0) {
   { iovp->iov_base = (cp); iovp->iov_len = (m); uio.uio_resid += (m); iovp++; if (++uio.uio_iovcnt >= 8) { if (__sprint(fp, &uio)) goto error; iovp = iov; } };
   ret += m;
  }
  if (n <= 0)
   goto done;
  fmt++;

  flags = 0;
  dprec = 0;
  width = 0;
  prec = -1;
  sign = '\0';

rflag: ch = *fmt++;
reswitch: switch (ch) {
  case ' ':





   if (!sign)
    sign = ' ';
   goto rflag;
  case '#':
   flags |= 0x001;
   goto rflag;
  case '*':






   if ((width = (ap = (__gnuc_va_list)((char *)(ap) + (((sizeof (int) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))), *((int *)(void *)((char *)(ap) - (((sizeof (int) + sizeof (int) - 1) / sizeof (int)) * sizeof (int)))))) >= 0)
    goto rflag;
   width = -width;

  case '-':
   flags |= 0x004;
   goto rflag;
  case '+':
   sign = '+';
   goto rflag;
  case '.':
   if ((ch = *fmt++) == '*') {
    n = (ap = (__gnuc_va_list)((char *)(ap) + (((sizeof (int) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))), *((int *)(void *)((char *)(ap) - (((sizeof (int) + sizeof (int) - 1) / sizeof (int)) * sizeof (int)))));
    prec = n < 0 ? -1 : n;
    goto rflag;
   }
   n = 0;
   while (((unsigned)((ch) - '0') <= 9)) {
    n = 10 * n + ((ch) - '0');
    ch = *fmt++;
   }
   prec = n < 0 ? -1 : n;
   goto reswitch;
  case '0':





   flags |= 0x080;
   goto rflag;
  case '1': case '2': case '3': case '4':
  case '5': case '6': case '7': case '8': case '9':
   n = 0;
   do {
    n = 10 * n + ((ch) - '0');
    ch = *fmt++;
   } while (((unsigned)((ch) - '0') <= 9));
   width = n;
   goto reswitch;

  case 'L':
   flags |= 0x008;
   goto rflag;

  case 'h':
   flags |= 0x040;
   goto rflag;
  case 'l':
   if (*fmt == 'l') {
    fmt++;
    flags |= 0x020;
   } else {
    flags |= 0x010;
   }
   goto rflag;
  case 'q':
   flags |= 0x020;
   goto rflag;
  case 'c':
   *(cp = buf) = (ap = (__gnuc_va_list)((char *)(ap) + (((sizeof (int) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))), *((int *)(void *)((char *)(ap) - (((sizeof (int) + sizeof (int) - 1) / sizeof (int)) * sizeof (int)))));
   size = 1;
   sign = '\0';
   break;
  case 'D':
   flags |= 0x010;

  case 'd':
  case 'i':
   _uquad = (flags&0x010 ? (ap = (__gnuc_va_list)((char *)(ap) + (((sizeof (long) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))), *((long *)(void *)((char *)(ap) - (((sizeof (long) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))))) : flags&0x040 ? (long)(short)(ap = (__gnuc_va_list)((char *)(ap) + (((sizeof (int) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))), *((int *)(void *)((char *)(ap) - (((sizeof (int) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))))) : (long)(ap = (__gnuc_va_list)((char *)(ap) + (((sizeof (int) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))), *((int *)(void *)((char *)(ap) - (((sizeof (int) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))))));



   if ((long) _uquad < 0)

   {

    _uquad = -_uquad;
    sign = '-';
   }
   base = DEC;
   goto number;

  case 'e':
  case 'E':
  case 'f':
  case 'g':
  case 'G':
   if (prec == -1) {
    prec = 6;
   } else if ((ch == 'g' || ch == 'G') && prec == 0) {
    prec = 1;
   }

   if (flags & 0x008) {
    _double = (double) (ap = (__gnuc_va_list)((char *)(ap) + (((sizeof (long double) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))), *((long double *)(void *)((char *)(ap) - (((sizeof (long double) + sizeof (int) - 1) / sizeof (int)) * sizeof (int)))));
   } else {
    _double = (ap = (__gnuc_va_list)((char *)(ap) + (((sizeof (double) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))), *((double *)(void *)((char *)(ap) - (((sizeof (double) + sizeof (int) - 1) / sizeof (int)) * sizeof (int)))));
   }


   if (isinf(_double)) {
    if (_double < 0)
     sign = '-';
    cp = "Inf";
    size = 3;
    break;
   }
   if (isnan(_double)) {
    cp = "NaN";
    size = 3;
    break;
   }

   flags |= 0x100;
   cp = cvt(data, _double, prec, flags, &softsign,
    &expt, ch, &ndig);
   if (ch == 'g' || ch == 'G') {
    if (expt <= -4 || expt > prec)
     ch = (ch == 'g') ? 'e' : 'E';
    else
     ch = 'g';
   }
   if (ch <= 'e') {
    --expt;
    expsize = exponent(expstr, expt, ch);
    size = expsize + ndig;
    if (ndig > 1 || flags & 0x001)
     ++size;
   } else if (ch == 'f') {
    if (expt > 0) {
     size = expt;
     if (prec || flags & 0x001)
      size += prec + 1;
    } else
     size = prec + 2;
   } else if (expt >= ndig) {
    size = expt;
    if (flags & 0x001)
     ++size;
   } else
    size = ndig + (expt > 0 ?
     1 : 2 - expt);

   if (softsign)
    sign = '-';
   break;

  case 'n':





   if (flags & 0x010)
    *(ap = (__gnuc_va_list)((char *)(ap) + (((sizeof (long *) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))), *((long * *)(void *)((char *)(ap) - (((sizeof (long *) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))))) = ret;
   else if (flags & 0x040)
    *(ap = (__gnuc_va_list)((char *)(ap) + (((sizeof (short *) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))), *((short * *)(void *)((char *)(ap) - (((sizeof (short *) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))))) = ret;
   else
    *(ap = (__gnuc_va_list)((char *)(ap) + (((sizeof (int *) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))), *((int * *)(void *)((char *)(ap) - (((sizeof (int *) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))))) = ret;
   continue;
  case 'O':
   flags |= 0x010;

  case 'o':
   _uquad = (flags&0x010 ? (ap = (__gnuc_va_list)((char *)(ap) + (((sizeof (u_long) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))), *((u_long *)(void *)((char *)(ap) - (((sizeof (u_long) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))))) : flags&0x040 ? (u_long)(u_short)(ap = (__gnuc_va_list)((char *)(ap) + (((sizeof (int) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))), *((int *)(void *)((char *)(ap) - (((sizeof (int) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))))) : (u_long)(ap = (__gnuc_va_list)((char *)(ap) + (((sizeof (u_int) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))), *((u_int *)(void *)((char *)(ap) - (((sizeof (u_int) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))))));
   base = OCT;
   goto nosign;
  case 'p':
# 622 "stdio/vfprintf.c"
   _uquad = (u_long)(unsigned long)(ap = (__gnuc_va_list)((char *)(ap) + (((sizeof (void *) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))), *((void * *)(void *)((char *)(ap) - (((sizeof (void *) + sizeof (int) - 1) / sizeof (int)) * sizeof (int)))));
   base = HEX;
   xdigs = "0123456789abcdef";
   flags |= 0x002;
   ch = 'x';
   goto nosign;
  case 's':
   if ((cp = (ap = (__gnuc_va_list)((char *)(ap) + (((sizeof (char *) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))), *((char * *)(void *)((char *)(ap) - (((sizeof (char *) + sizeof (int) - 1) / sizeof (int)) * sizeof (int)))))) == ((void *)0))
    cp = "(null)";
   if (prec >= 0) {





    char *p = memchr(cp, 0, prec);

    if (p != ((void *)0)) {
     size = p - cp;
     if (size > prec)
      size = prec;
    } else
     size = prec;
   } else
    size = strlen(cp);
   sign = '\0';
   break;
  case 'U':
   flags |= 0x010;

  case 'u':
   _uquad = (flags&0x010 ? (ap = (__gnuc_va_list)((char *)(ap) + (((sizeof (u_long) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))), *((u_long *)(void *)((char *)(ap) - (((sizeof (u_long) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))))) : flags&0x040 ? (u_long)(u_short)(ap = (__gnuc_va_list)((char *)(ap) + (((sizeof (int) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))), *((int *)(void *)((char *)(ap) - (((sizeof (int) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))))) : (u_long)(ap = (__gnuc_va_list)((char *)(ap) + (((sizeof (u_int) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))), *((u_int *)(void *)((char *)(ap) - (((sizeof (u_int) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))))));
   base = DEC;
   goto nosign;
  case 'X':
   xdigs = "0123456789ABCDEF";
   goto hex;
  case 'x':
   xdigs = "0123456789abcdef";
hex: _uquad = (flags&0x010 ? (ap = (__gnuc_va_list)((char *)(ap) + (((sizeof (u_long) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))), *((u_long *)(void *)((char *)(ap) - (((sizeof (u_long) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))))) : flags&0x040 ? (u_long)(u_short)(ap = (__gnuc_va_list)((char *)(ap) + (((sizeof (int) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))), *((int *)(void *)((char *)(ap) - (((sizeof (int) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))))) : (u_long)(ap = (__gnuc_va_list)((char *)(ap) + (((sizeof (u_int) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))), *((u_int *)(void *)((char *)(ap) - (((sizeof (u_int) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))))));
   base = HEX;

   if (flags & 0x001 && _uquad != 0)
    flags |= 0x002;


nosign: sign = '\0';





number: if ((dprec = prec) >= 0)
    flags &= ~0x080;






   cp = buf + (308 +39 +1);
   if (_uquad != 0 || prec != 0) {





    switch (base) {
    case OCT:
     do {
      *--cp = ((_uquad & 7) + '0');
      _uquad >>= 3;
     } while (_uquad);

     if (flags & 0x001 && *cp != '0')
      *--cp = '0';
     break;

    case DEC:

     while (_uquad >= 10) {
      *--cp = ((_uquad % 10) + '0');
      _uquad /= 10;
     }
     *--cp = ((_uquad) + '0');
     break;

    case HEX:
     do {
      *--cp = xdigs[_uquad & 15];
      _uquad >>= 4;
     } while (_uquad);
     break;

    default:
     cp = "bug in vfprintf: bad base";
     size = strlen(cp);
     goto skipsize;
    }
   }
   size = buf + (308 +39 +1) - cp;
  skipsize:
   break;
  default:
   if (ch == '\0')
    goto done;

   cp = buf;
   *cp = ch;
   size = 1;
   sign = '\0';
   break;
  }
# 750 "stdio/vfprintf.c"
  realsz = dprec > size ? dprec : size;
  if (sign)
   realsz++;
  else if (flags & 0x002)
   realsz+= 2;


  if ((flags & (0x004|0x080)) == 0)
   { if ((n = (width - realsz)) > 0) { while (n > 16) { { iovp->iov_base = (blanks); iovp->iov_len = (16); uio.uio_resid += (16); iovp++; if (++uio.uio_iovcnt >= 8) { if (__sprint(fp, &uio)) goto error; iovp = iov; } }; n -= 16; } { iovp->iov_base = (blanks); iovp->iov_len = (n); uio.uio_resid += (n); iovp++; if (++uio.uio_iovcnt >= 8) { if (__sprint(fp, &uio)) goto error; iovp = iov; } }; } };


  if (sign) {
   { iovp->iov_base = (&sign); iovp->iov_len = (1); uio.uio_resid += (1); iovp++; if (++uio.uio_iovcnt >= 8) { if (__sprint(fp, &uio)) goto error; iovp = iov; } };
  } else if (flags & 0x002) {
   ox[0] = '0';
   ox[1] = ch;
   { iovp->iov_base = (ox); iovp->iov_len = (2); uio.uio_resid += (2); iovp++; if (++uio.uio_iovcnt >= 8) { if (__sprint(fp, &uio)) goto error; iovp = iov; } };
  }


  if ((flags & (0x004|0x080)) == 0x080)
   { if ((n = (width - realsz)) > 0) { while (n > 16) { { iovp->iov_base = (zeroes); iovp->iov_len = (16); uio.uio_resid += (16); iovp++; if (++uio.uio_iovcnt >= 8) { if (__sprint(fp, &uio)) goto error; iovp = iov; } }; n -= 16; } { iovp->iov_base = (zeroes); iovp->iov_len = (n); uio.uio_resid += (n); iovp++; if (++uio.uio_iovcnt >= 8) { if (__sprint(fp, &uio)) goto error; iovp = iov; } }; } };


  { if ((n = (dprec - size)) > 0) { while (n > 16) { { iovp->iov_base = (zeroes); iovp->iov_len = (16); uio.uio_resid += (16); iovp++; if (++uio.uio_iovcnt >= 8) { if (__sprint(fp, &uio)) goto error; iovp = iov; } }; n -= 16; } { iovp->iov_base = (zeroes); iovp->iov_len = (n); uio.uio_resid += (n); iovp++; if (++uio.uio_iovcnt >= 8) { if (__sprint(fp, &uio)) goto error; iovp = iov; } }; } };



  if ((flags & 0x100) == 0) {
   { iovp->iov_base = (cp); iovp->iov_len = (size); uio.uio_resid += (size); iovp++; if (++uio.uio_iovcnt >= 8) { if (__sprint(fp, &uio)) goto error; iovp = iov; } };
  } else {
   if (ch >= 'f') {
    if (_double == 0) {

     { iovp->iov_base = ("0"); iovp->iov_len = (1); uio.uio_resid += (1); iovp++; if (++uio.uio_iovcnt >= 8) { if (__sprint(fp, &uio)) goto error; iovp = iov; } };
     if (expt < ndig || (flags & 0x001) != 0) {
      { iovp->iov_base = (decimal_point); iovp->iov_len = (1); uio.uio_resid += (1); iovp++; if (++uio.uio_iovcnt >= 8) { if (__sprint(fp, &uio)) goto error; iovp = iov; } };
      { if ((n = (ndig - 1)) > 0) { while (n > 16) { { iovp->iov_base = (zeroes); iovp->iov_len = (16); uio.uio_resid += (16); iovp++; if (++uio.uio_iovcnt >= 8) { if (__sprint(fp, &uio)) goto error; iovp = iov; } }; n -= 16; } { iovp->iov_base = (zeroes); iovp->iov_len = (n); uio.uio_resid += (n); iovp++; if (++uio.uio_iovcnt >= 8) { if (__sprint(fp, &uio)) goto error; iovp = iov; } }; } };
     }
    } else if (expt <= 0) {
     { iovp->iov_base = ("0"); iovp->iov_len = (1); uio.uio_resid += (1); iovp++; if (++uio.uio_iovcnt >= 8) { if (__sprint(fp, &uio)) goto error; iovp = iov; } };
     { iovp->iov_base = (decimal_point); iovp->iov_len = (1); uio.uio_resid += (1); iovp++; if (++uio.uio_iovcnt >= 8) { if (__sprint(fp, &uio)) goto error; iovp = iov; } };
     { if ((n = (-expt)) > 0) { while (n > 16) { { iovp->iov_base = (zeroes); iovp->iov_len = (16); uio.uio_resid += (16); iovp++; if (++uio.uio_iovcnt >= 8) { if (__sprint(fp, &uio)) goto error; iovp = iov; } }; n -= 16; } { iovp->iov_base = (zeroes); iovp->iov_len = (n); uio.uio_resid += (n); iovp++; if (++uio.uio_iovcnt >= 8) { if (__sprint(fp, &uio)) goto error; iovp = iov; } }; } };
     { iovp->iov_base = (cp); iovp->iov_len = (ndig); uio.uio_resid += (ndig); iovp++; if (++uio.uio_iovcnt >= 8) { if (__sprint(fp, &uio)) goto error; iovp = iov; } };
    } else if (expt >= ndig) {
     { iovp->iov_base = (cp); iovp->iov_len = (ndig); uio.uio_resid += (ndig); iovp++; if (++uio.uio_iovcnt >= 8) { if (__sprint(fp, &uio)) goto error; iovp = iov; } };
     { if ((n = (expt - ndig)) > 0) { while (n > 16) { { iovp->iov_base = (zeroes); iovp->iov_len = (16); uio.uio_resid += (16); iovp++; if (++uio.uio_iovcnt >= 8) { if (__sprint(fp, &uio)) goto error; iovp = iov; } }; n -= 16; } { iovp->iov_base = (zeroes); iovp->iov_len = (n); uio.uio_resid += (n); iovp++; if (++uio.uio_iovcnt >= 8) { if (__sprint(fp, &uio)) goto error; iovp = iov; } }; } };
     if (flags & 0x001)
      { iovp->iov_base = ("."); iovp->iov_len = (1); uio.uio_resid += (1); iovp++; if (++uio.uio_iovcnt >= 8) { if (__sprint(fp, &uio)) goto error; iovp = iov; } };
    } else {
     { iovp->iov_base = (cp); iovp->iov_len = (expt); uio.uio_resid += (expt); iovp++; if (++uio.uio_iovcnt >= 8) { if (__sprint(fp, &uio)) goto error; iovp = iov; } };
     cp += expt;
     { iovp->iov_base = ("."); iovp->iov_len = (1); uio.uio_resid += (1); iovp++; if (++uio.uio_iovcnt >= 8) { if (__sprint(fp, &uio)) goto error; iovp = iov; } };
     { iovp->iov_base = (cp); iovp->iov_len = (ndig-expt); uio.uio_resid += (ndig-expt); iovp++; if (++uio.uio_iovcnt >= 8) { if (__sprint(fp, &uio)) goto error; iovp = iov; } };
    }
   } else {
    if (ndig > 1 || flags & 0x001) {
     ox[0] = *cp++;
     ox[1] = '.';
     { iovp->iov_base = (ox); iovp->iov_len = (2); uio.uio_resid += (2); iovp++; if (++uio.uio_iovcnt >= 8) { if (__sprint(fp, &uio)) goto error; iovp = iov; } };
     if (_double || flags & 0x001 == 0) {
      { iovp->iov_base = (cp); iovp->iov_len = (ndig-1); uio.uio_resid += (ndig-1); iovp++; if (++uio.uio_iovcnt >= 8) { if (__sprint(fp, &uio)) goto error; iovp = iov; } };
     } else

      { if ((n = (ndig - 1)) > 0) { while (n > 16) { { iovp->iov_base = (zeroes); iovp->iov_len = (16); uio.uio_resid += (16); iovp++; if (++uio.uio_iovcnt >= 8) { if (__sprint(fp, &uio)) goto error; iovp = iov; } }; n -= 16; } { iovp->iov_base = (zeroes); iovp->iov_len = (n); uio.uio_resid += (n); iovp++; if (++uio.uio_iovcnt >= 8) { if (__sprint(fp, &uio)) goto error; iovp = iov; } }; } };
    } else
     { iovp->iov_base = (cp); iovp->iov_len = (1); uio.uio_resid += (1); iovp++; if (++uio.uio_iovcnt >= 8) { if (__sprint(fp, &uio)) goto error; iovp = iov; } };
    { iovp->iov_base = (expstr); iovp->iov_len = (expsize); uio.uio_resid += (expsize); iovp++; if (++uio.uio_iovcnt >= 8) { if (__sprint(fp, &uio)) goto error; iovp = iov; } };
   }
  }




  if (flags & 0x004)
   { if ((n = (width - realsz)) > 0) { while (n > 16) { { iovp->iov_base = (blanks); iovp->iov_len = (16); uio.uio_resid += (16); iovp++; if (++uio.uio_iovcnt >= 8) { if (__sprint(fp, &uio)) goto error; iovp = iov; } }; n -= 16; } { iovp->iov_base = (blanks); iovp->iov_len = (n); uio.uio_resid += (n); iovp++; if (++uio.uio_iovcnt >= 8) { if (__sprint(fp, &uio)) goto error; iovp = iov; } }; } };


  ret += width > realsz ? width : realsz;

  { if (uio.uio_resid && __sprint(fp, &uio)) goto error; uio.uio_iovcnt = 0; iovp = iov; };
 }
done:
 { if (uio.uio_resid && __sprint(fp, &uio)) goto error; uio.uio_iovcnt = 0; iovp = iov; };
error:
 return ((((fp)->_flags & 0x0040) != 0) ? (-1) : ret);

}



extern char *_dtoa_r (struct _reent *, double, int, int, int *, int *, char **)
                                     ;

static char *
cvt(data, value, ndigits, flags, sign, decpt, ch, length)
 struct _reent *data;
 double value;
 int ndigits, flags, *decpt, ch, *length;
 char *sign;
{
 int mode, dsgn;
 char *digits, *bp, *rve;
        __ieee_double_shape_type tmp;

 if (ch == 'f') {
  mode = 3;
 } else {




  if (ch == 'e' || ch == 'E') {
   ndigits++;
  }
  mode = 2;
 }

        tmp.value = value;
 if (tmp.number.sign) {
  value = -value;
  *sign = '-';
        } else
  *sign = '\000';
 digits = _dtoa_r(data, value, mode, ndigits, decpt, &dsgn, &rve);
 if ((ch != 'g' && ch != 'G') || flags & 0x001) {
  bp = digits + ndigits;
  if (ch == 'f') {
   if (*digits == '0' && value)
    *decpt = -ndigits + 1;
   bp += *decpt;
  }
  if (value == 0)
   rve = bp;
  while (rve < bp)
   *rve++ = '0';
 }
 *length = rve - digits;
 return (digits);
}

static int
exponent(p0, exp, fmtch)
 char *p0;
 int exp, fmtch;
{
 register char *p, *t;
 char expbuf[308];

 p = p0;
 *p++ = fmtch;
 if (exp < 0) {
  exp = -exp;
  *p++ = '-';
 }
 else
  *p++ = '+';
 t = expbuf + 308;
 if (exp > 9) {
  do {
   *--t = ((exp % 10) + '0');
  } while ((exp /= 10) > 9);
  *--t = ((exp) + '0');
  for (; t < expbuf + 308; *p++ = *t++);
 }
 else {
  *p++ = '0';
  *p++ = ((exp) + '0');
 }
 return (p - p0);
}
