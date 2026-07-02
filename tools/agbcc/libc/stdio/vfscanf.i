# 0 "stdio/vfscanf.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "stdio/vfscanf.c"
# 20 "stdio/vfscanf.c"
# 1 "include/_ansi.h" 1
# 15 "include/_ansi.h"
# 1 "include/sys/config.h" 1
# 103 "include/sys/config.h"
typedef int __int32_t;
typedef unsigned int __uint32_t;
# 16 "include/_ansi.h" 2
# 21 "stdio/vfscanf.c" 2
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
# 22 "stdio/vfscanf.c" 2
# 1 "include/stdio.h" 1
# 37 "include/stdio.h"
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
# 23 "stdio/vfscanf.c" 2
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
# 24 "stdio/vfscanf.c" 2





# 1 "stdio/local.h" 1
# 27 "stdio/local.h"
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
# 28 "stdio/local.h" 2
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
# 30 "stdio/vfscanf.c" 2






# 1 "stdio/floatio.h" 1
# 37 "stdio/vfscanf.c" 2
# 84 "stdio/vfscanf.c"
           char *__sccl ();







int
__svfscanf (fp, fmt0, ap)
     register FILE *fp;
     char const *fmt0;
     va_list ap;
{
  register char *fmt = (char *) fmt0;
  register int c;
  register size_t width;
  register char *p;
  register int n;
  register int flags;
  register char *p0;
  int nassigned;
  int nread;
  int base = 0;
  int nbytes = 1;
  wchar_t wc;

  unsigned long (*ccfn) () = 0;
  char ccltab[256];
  char buf[(308 +39 +3)];
  char *lptr;
  int state = 0;

  short *sp;
  int *ip;
  float *flp;
  long double *ldp;
  double *dp;
  long *lp;


  static const short basefix[17] =
    {10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

  nassigned = 0;
  nread = 0;
  for (;;)
    {

      wc = *fmt;



      fmt += nbytes;
      if (wc == 0)
 return nassigned;
      if (nbytes == 1 && ((_ctype_+1)[(unsigned)(wc)]&010))
 {
   for (;;)
     {
       if ((fp->_r <= 0 && __srefill(fp)))
  return nassigned;
       if (!((_ctype_+1)[(unsigned)(*fp->_p)]&010))
  break;
       nread++, fp->_r--, fp->_p++;
     }
   continue;
 }
      if (wc != '%')
 goto literal;
      width = 0;
      flags = 0;






    again:
      c = *fmt++;

      switch (c)
 {
 case '%':
 literal:
          lptr = fmt - nbytes;
          for (n = 0; n < nbytes; ++n)
            {
       if ((fp->_r <= 0 && __srefill(fp)))
         goto input_failure;
       if (*fp->_p != *lptr)
         goto match_failure;
       fp->_r--, fp->_p++;
       nread++;
              ++lptr;
            }
   continue;

 case '*':
   flags |= 0x08;
   goto again;
 case 'l':
   flags |= 0x01;
   goto again;
 case 'L':
   flags |= 0x02;
   goto again;
 case 'h':
   flags |= 0x04;
   goto again;

 case '0':
 case '1':
 case '2':
 case '3':
 case '4':
 case '5':
 case '6':
 case '7':
 case '8':
 case '9':
   width = width * 10 + c - '0';
   goto again;
# 216 "stdio/vfscanf.c"
 case 'D':
   flags |= 0x01;

 case 'd':
   c = 3;
   ccfn = (unsigned long (*)())strtol;
   base = 10;
   break;

 case 'i':
   c = 3;
   ccfn = (unsigned long (*)())strtol;
   base = 0;
   break;

 case 'O':
   flags |= 0x01;

 case 'o':
   c = 3;
   ccfn = strtoul;
   base = 8;
   break;

 case 'u':
   c = 3;
   ccfn = strtoul;
   base = 10;
   break;

 case 'X':
 case 'x':
   flags |= 0x100;
   c = 3;
   ccfn = strtoul;
   base = 16;
   break;


 case 'E':
 case 'G':


 case 'e':
 case 'f':
 case 'g':
   c = 4;
   break;


 case 's':
   c = 2;
   break;

 case '[':
   fmt = __sccl (ccltab, fmt);
   flags |= 0x20;
   c = 1;
   break;

 case 'c':
   flags |= 0x20;
   c = 0;
   break;

 case 'p':
   flags |= 0x10 | 0x100;
   c = 3;
   ccfn = strtoul;
   base = 16;
   break;

 case 'n':
   if (flags & 0x08)
     continue;
   if (flags & 0x04)
     {
       sp = (ap = (__gnuc_va_list)((char *)(ap) + (((sizeof (short *) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))), *((short * *)(void *)((char *)(ap) - (((sizeof (short *) + sizeof (int) - 1) / sizeof (int)) * sizeof (int)))));
       *sp = nread;
     }
   else if (flags & 0x01)
     {
       lp = (ap = (__gnuc_va_list)((char *)(ap) + (((sizeof (long *) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))), *((long * *)(void *)((char *)(ap) - (((sizeof (long *) + sizeof (int) - 1) / sizeof (int)) * sizeof (int)))));
       *lp = nread;
     }
   else
     {
       ip = (ap = (__gnuc_va_list)((char *)(ap) + (((sizeof (int *) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))), *((int * *)(void *)((char *)(ap) - (((sizeof (int *) + sizeof (int) - 1) / sizeof (int)) * sizeof (int)))));
       *ip = nread;
     }
   continue;




 case '\0':
   return (-1);

 default:
   if (((_ctype_+1)[(unsigned)(c)]&01))
     flags |= 0x01;
   c = 3;
   ccfn = (unsigned long (*)())strtol;
   base = 10;
   break;
 }




      if ((fp->_r <= 0 && __srefill(fp)))
 goto input_failure;





      if ((flags & 0x20) == 0)
 {
   while (((_ctype_+1)[(unsigned)(*fp->_p)]&010))
     {
       nread++;
       if (--fp->_r > 0)
  fp->_p++;
       else

       if (__srefill (fp))

  goto input_failure;
     }





 }




      switch (c)
 {

 case 0:

   if (width == 0)
     width = 1;
   if (flags & 0x08)
     {
       size_t sum = 0;

       for (;;)
  {
    if ((n = fp->_r) < width)
      {
        sum += n;
        width -= n;
        fp->_p += n;

        if (__srefill (fp))
   {

     if (sum == 0)
       goto input_failure;
     break;

   }

      }
    else
      {
        sum += width;
        fp->_r -= width;
        fp->_p += width;
        break;
      }
  }
       nread += sum;
     }
   else
     {
# 412 "stdio/vfscanf.c"
       size_t r = fread ((void *) (ap = (__gnuc_va_list)((char *)(ap) + (((sizeof (char *) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))), *((char * *)(void *)((char *)(ap) - (((sizeof (char *) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))))), 1, width, fp);

       if (r == 0)
  goto input_failure;
       nread += r;

       nassigned++;
     }
   break;

 case 1:

   if (width == 0)
     width = ~0;

   if (flags & 0x08)
     {
       n = 0;
       while (ccltab[*fp->_p])
  {
    n++, fp->_r--, fp->_p++;
    if (--width == 0)
      break;
    if ((fp->_r <= 0 && __srefill(fp)))
      {
        if (n == 0)
   goto input_failure;
        break;
      }
  }
       if (n == 0)
  goto match_failure;
     }
   else
     {
       p0 = p = (ap = (__gnuc_va_list)((char *)(ap) + (((sizeof (char *) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))), *((char * *)(void *)((char *)(ap) - (((sizeof (char *) + sizeof (int) - 1) / sizeof (int)) * sizeof (int)))));
       while (ccltab[*fp->_p])
  {
    fp->_r--;
    *p++ = *fp->_p++;
    if (--width == 0)
      break;
    if ((fp->_r <= 0 && __srefill(fp)))
      {
        if (p == p0)
   goto input_failure;
        break;
      }
  }
       n = p - p0;
       if (n == 0)
  goto match_failure;
       *p = 0;
       nassigned++;
     }
   nread += n;
   break;

 case 2:

   if (width == 0)
     width = ~0;
   if (flags & 0x08)
     {
       n = 0;
       while (!((_ctype_+1)[(unsigned)(*fp->_p)]&010))
  {
    n++, fp->_r--, fp->_p++;
    if (--width == 0)
      break;
    if ((fp->_r <= 0 && __srefill(fp)))
      break;
  }
       nread += n;
     }
   else
     {
       p0 = p = (ap = (__gnuc_va_list)((char *)(ap) + (((sizeof (char *) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))), *((char * *)(void *)((char *)(ap) - (((sizeof (char *) + sizeof (int) - 1) / sizeof (int)) * sizeof (int)))));
       while (!((_ctype_+1)[(unsigned)(*fp->_p)]&010))
  {
    fp->_r--;
    *p++ = *fp->_p++;
    if (--width == 0)
      break;
    if ((fp->_r <= 0 && __srefill(fp)))
      break;
  }
       *p = 0;
       nread += p - p0;
       nassigned++;
     }
   continue;

 case 3:






   if (--width > sizeof (buf) - 2)
     width = sizeof (buf) - 2;
   width++;

   flags |= 0x40 | 0x80 | 0x200;
   for (p = buf; width; width--)
     {
       c = *fp->_p;




       switch (c)
  {
# 535 "stdio/vfscanf.c"
  case '0':
    if (base == 0)
      {
        base = 8;
        flags |= 0x100;
      }
    if (flags & 0x200)
      flags &= ~(0x40 | 0x200 | 0x80);
    else
      flags &= ~(0x40 | 0x100 | 0x80);
    goto ok;


  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
    base = basefix[base];
    flags &= ~(0x40 | 0x100 | 0x80);
    goto ok;


  case '8':
  case '9':
    base = basefix[base];
    if (base <= 8)
      break;
    flags &= ~(0x40 | 0x100 | 0x80);
    goto ok;


  case 'A':
  case 'B':
  case 'C':
  case 'D':
  case 'E':
  case 'F':
  case 'a':
  case 'b':
  case 'c':
  case 'd':
  case 'e':
  case 'f':

    if (base <= 10)
      break;
    flags &= ~(0x40 | 0x100 | 0x80);
    goto ok;


  case '+':
  case '-':
    if (flags & 0x40)
      {
        flags &= ~0x40;
        goto ok;
      }
    break;


  case 'x':
  case 'X':
    if (flags & 0x100 && p == buf + 1)
      {
        base = 16;
        flags &= ~0x100;
        goto ok;
      }
    break;
  }





       break;
     ok:



       *p++ = c;
       if (--fp->_r > 0)
  fp->_p++;
       else

       if (__srefill (fp))

  break;
     }





   if (flags & 0x80)
     {
       if (p > buf)
  (void) ungetc (*(char *)-- p, fp);
       goto match_failure;
     }
   c = ((char *) p)[-1];
   if (c == 'x' || c == 'X')
     {
       --p;
                  ungetc (c, fp);
     }
   if ((flags & 0x08) == 0)
     {
       unsigned long res;

       *p = 0;
       res = (*ccfn) (buf, (char **) ((void *)0), base);
       if (flags & 0x10)
  *((ap = (__gnuc_va_list)((char *)(ap) + (((sizeof (void * *) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))), *((void * * *)(void *)((char *)(ap) - (((sizeof (void * *) + sizeof (int) - 1) / sizeof (int)) * sizeof (int)))))) = (void *) (unsigned long) res;
       else if (flags & 0x04)
  {
    sp = (ap = (__gnuc_va_list)((char *)(ap) + (((sizeof (short *) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))), *((short * *)(void *)((char *)(ap) - (((sizeof (short *) + sizeof (int) - 1) / sizeof (int)) * sizeof (int)))));
    *sp = res;
  }
       else if (flags & 0x01)
  {
    lp = (ap = (__gnuc_va_list)((char *)(ap) + (((sizeof (long *) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))), *((long * *)(void *)((char *)(ap) - (((sizeof (long *) + sizeof (int) - 1) / sizeof (int)) * sizeof (int)))));
    *lp = res;
  }
       else
  {
    ip = (ap = (__gnuc_va_list)((char *)(ap) + (((sizeof (int *) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))), *((int * *)(void *)((char *)(ap) - (((sizeof (int *) + sizeof (int) - 1) / sizeof (int)) * sizeof (int)))));
    *ip = res;
  }
       nassigned++;
     }
   nread += p - buf;
   break;


 case 4:






   if (--width > sizeof (buf) - 2)
     width = sizeof (buf) - 2;
   width++;

   flags |= 0x40 | 0x80 | 0x100 | 0x200;
   for (p = buf; width; width--)
     {
       c = *fp->_p;




       switch (c)
  {

  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    flags &= ~(0x40 | 0x80);
    goto fok;

  case '+':
  case '-':
    if (flags & 0x40)
      {
        flags &= ~0x40;
        goto fok;
      }
    break;
  case '.':
    if (flags & 0x100)
      {
        flags &= ~(0x40 | 0x100);
        goto fok;
      }
    break;
  case 'e':
  case 'E':

    if ((flags & (0x80 | 0x200)) == 0x200)
      {
        flags =
   (flags & ~(0x200 | 0x100)) |
   0x40 | 0x80;
        goto fok;
      }
    break;
  }
       break;
     fok:
       *p++ = c;
       if (--fp->_r > 0)
  fp->_p++;
       else

       if (__srefill (fp))

  break;
     }





   if (flags & 0x80)
     {
       if (flags & 0x200)
  {

    while (p > buf)
      ungetc (*(char *)-- p, fp);
    goto match_failure;
  }

       c = *(char *)-- p;
       if (c != 'e' && c != 'E')
  {
    (void) ungetc (c, fp);
    c = *(char *)-- p;
  }
       (void) ungetc (c, fp);
     }
   if ((flags & 0x08) == 0)
     {
       double res;

       *p = 0;
       res = atof (buf);
       if (flags & 0x01)
  {
    dp = (ap = (__gnuc_va_list)((char *)(ap) + (((sizeof (double *) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))), *((double * *)(void *)((char *)(ap) - (((sizeof (double *) + sizeof (int) - 1) / sizeof (int)) * sizeof (int)))));
    *dp = res;
  }
       else if (flags & 0x02)
  {
    ldp = (ap = (__gnuc_va_list)((char *)(ap) + (((sizeof (long double *) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))), *((long double * *)(void *)((char *)(ap) - (((sizeof (long double *) + sizeof (int) - 1) / sizeof (int)) * sizeof (int)))));
    *ldp = res;
  }
       else
  {
    flp = (ap = (__gnuc_va_list)((char *)(ap) + (((sizeof (float *) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))), *((float * *)(void *)((char *)(ap) - (((sizeof (float *) + sizeof (int) - 1) / sizeof (int)) * sizeof (int)))));
    *flp = res;
  }
       nassigned++;
     }
   nread += p - buf;
   break;

 }
    }
input_failure:
  return nassigned ? nassigned : -1;
match_failure:
  return nassigned;
}
# 811 "stdio/vfscanf.c"
char *
__sccl (tab, fmt)
     register char *tab;
     register char *fmt;
{
  register int c, n, v;


  c = *fmt++;
  if (c == '^')
    {
      v = 1;
      c = *fmt++;
    }
  else
    v = 0;

  for (n = 0; n < 256; n++)
    tab[n] = v;
  if (c == 0)
    return fmt - 1;
# 841 "stdio/vfscanf.c"
  v = 1 - v;
  for (;;)
    {
      tab[c] = v;
    doswitch:
      n = *fmt++;
      switch (n)
 {

 case 0:
   return fmt - 1;

 case '-':
# 866 "stdio/vfscanf.c"
   n = *fmt;
   if (n == ']' || n < c)
     {
       c = '-';
       break;
     }
   fmt++;
   do
     {
       tab[++c] = v;
     }
   while (c < n);






   goto doswitch;
# 893 "stdio/vfscanf.c"
   break;


 case ']':
   return fmt;

 default:
   c = n;
   break;
 }
    }

}
