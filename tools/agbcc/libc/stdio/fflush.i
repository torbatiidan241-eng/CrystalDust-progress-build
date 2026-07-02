# 0 "stdio/fflush.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "stdio/fflush.c"
# 54 "stdio/fflush.c"
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
# 55 "stdio/fflush.c" 2
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
# 56 "stdio/fflush.c" 2



int
fflush(register FILE * fp)

{
  register unsigned char *p;
  register int n, t;




  if (fp == ((void *)0))
    return _fwalk (_impure_ptr, fflush);

  do { if ((fp)->_data == 0) (fp)->_data = _impure_ptr; if (!(fp)->_data->__sdidinit) __sinit ((fp)->_data); } while (0);

  t = fp->_flags;
  if ((t & 0x0008) == 0 || (p = fp->_bf._base) == ((void *)0))
    return 0;
  n = fp->_p - p;






  fp->_p = p;
  fp->_w = t & (0x0001 | 0x0002) ? 0 : fp->_bf._size;

  while (n > 0)
    {
      t = (*fp->_write) (fp->_cookie, (char *) p, n);
      if (t <= 0)
 {
   fp->_flags |= 0x0040;
   return (-1);
 }
      p += t;
      n -= t;
    }
  return 0;
}
