# 0 "stdlib/mallocr.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "stdlib/mallocr.c"
# 261 "stdlib/mallocr.c"
# 1 "../ginclude/stddef.h" 1





typedef long int ptrdiff_t;



typedef unsigned long int size_t;






typedef int wchar_t;
# 262 "stdlib/mallocr.c" 2
# 270 "stdlib/mallocr.c"
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
# 271 "stdlib/mallocr.c" 2
# 294 "stdlib/mallocr.c"
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
# 295 "stdlib/mallocr.c" 2
# 313 "stdlib/mallocr.c"
extern void __malloc_lock(struct _reent *);
extern void __malloc_unlock(struct _reent *);
# 493 "stdlib/mallocr.c"
void* memset(void*, int, size_t);
void* memcpy(void*, const void*, size_t);
# 629 "stdlib/mallocr.c"
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
# 630 "stdlib/mallocr.c" 2
# 706 "stdlib/mallocr.c"
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
# 1026 "stdlib/mallocr.c"
void* _malloc_r(struct _reent *reent_ptr, size_t);
void _free_r(struct _reent *reent_ptr, void*);
void* _realloc_r(struct _reent *reent_ptr, void*, size_t);
void* _memalign_r(struct _reent *reent_ptr, size_t, size_t);
void* _valloc_r(struct _reent *reent_ptr, size_t);
void* _pvalloc_r(struct _reent *reent_ptr, size_t);
void* _calloc_r(struct _reent *reent_ptr, size_t, size_t);
void cfree(void*);
int _malloc_trim_r(struct _reent *reent_ptr, size_t);
size_t _malloc_usable_size_r(struct _reent *reent_ptr, void*);
void _malloc_stats_r(struct _reent *reent_ptr);
int _mallopt_r(struct _reent *reent_ptr, int, int);
struct mallinfo _mallinfo_r(struct _reent *reent_ptr);
# 1235 "stdlib/mallocr.c"
struct malloc_chunk
{
  size_t prev_size;
  size_t size;
  struct malloc_chunk* fd;
  struct malloc_chunk* bk;
};

typedef struct malloc_chunk* mchunkptr;
# 1543 "stdlib/mallocr.c"
typedef struct malloc_chunk* mbinptr;
# 1575 "stdlib/mallocr.c"
 mbinptr __malloc_av_[128 * 2 + 2] = {
 0, 0,
 ((mbinptr)((char*)&(__malloc_av_[2*(0) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(0) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(1) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(1) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(2) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(2) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(3) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(3) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(4) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(4) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(5) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(5) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(6) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(6) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(7) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(7) + 2]) - 2*(sizeof(size_t)))),
 ((mbinptr)((char*)&(__malloc_av_[2*(8) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(8) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(9) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(9) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(10) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(10) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(11) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(11) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(12) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(12) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(13) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(13) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(14) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(14) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(15) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(15) + 2]) - 2*(sizeof(size_t)))),
 ((mbinptr)((char*)&(__malloc_av_[2*(16) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(16) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(17) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(17) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(18) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(18) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(19) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(19) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(20) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(20) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(21) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(21) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(22) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(22) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(23) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(23) + 2]) - 2*(sizeof(size_t)))),
 ((mbinptr)((char*)&(__malloc_av_[2*(24) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(24) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(25) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(25) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(26) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(26) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(27) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(27) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(28) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(28) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(29) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(29) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(30) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(30) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(31) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(31) + 2]) - 2*(sizeof(size_t)))),
 ((mbinptr)((char*)&(__malloc_av_[2*(32) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(32) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(33) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(33) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(34) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(34) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(35) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(35) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(36) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(36) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(37) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(37) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(38) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(38) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(39) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(39) + 2]) - 2*(sizeof(size_t)))),
 ((mbinptr)((char*)&(__malloc_av_[2*(40) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(40) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(41) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(41) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(42) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(42) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(43) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(43) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(44) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(44) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(45) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(45) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(46) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(46) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(47) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(47) + 2]) - 2*(sizeof(size_t)))),
 ((mbinptr)((char*)&(__malloc_av_[2*(48) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(48) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(49) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(49) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(50) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(50) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(51) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(51) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(52) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(52) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(53) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(53) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(54) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(54) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(55) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(55) + 2]) - 2*(sizeof(size_t)))),
 ((mbinptr)((char*)&(__malloc_av_[2*(56) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(56) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(57) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(57) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(58) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(58) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(59) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(59) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(60) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(60) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(61) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(61) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(62) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(62) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(63) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(63) + 2]) - 2*(sizeof(size_t)))),
 ((mbinptr)((char*)&(__malloc_av_[2*(64) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(64) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(65) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(65) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(66) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(66) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(67) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(67) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(68) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(68) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(69) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(69) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(70) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(70) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(71) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(71) + 2]) - 2*(sizeof(size_t)))),
 ((mbinptr)((char*)&(__malloc_av_[2*(72) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(72) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(73) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(73) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(74) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(74) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(75) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(75) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(76) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(76) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(77) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(77) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(78) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(78) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(79) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(79) + 2]) - 2*(sizeof(size_t)))),
 ((mbinptr)((char*)&(__malloc_av_[2*(80) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(80) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(81) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(81) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(82) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(82) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(83) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(83) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(84) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(84) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(85) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(85) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(86) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(86) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(87) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(87) + 2]) - 2*(sizeof(size_t)))),
 ((mbinptr)((char*)&(__malloc_av_[2*(88) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(88) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(89) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(89) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(90) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(90) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(91) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(91) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(92) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(92) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(93) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(93) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(94) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(94) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(95) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(95) + 2]) - 2*(sizeof(size_t)))),
 ((mbinptr)((char*)&(__malloc_av_[2*(96) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(96) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(97) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(97) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(98) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(98) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(99) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(99) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(100) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(100) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(101) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(101) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(102) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(102) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(103) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(103) + 2]) - 2*(sizeof(size_t)))),
 ((mbinptr)((char*)&(__malloc_av_[2*(104) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(104) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(105) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(105) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(106) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(106) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(107) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(107) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(108) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(108) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(109) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(109) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(110) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(110) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(111) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(111) + 2]) - 2*(sizeof(size_t)))),
 ((mbinptr)((char*)&(__malloc_av_[2*(112) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(112) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(113) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(113) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(114) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(114) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(115) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(115) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(116) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(116) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(117) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(117) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(118) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(118) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(119) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(119) + 2]) - 2*(sizeof(size_t)))),
 ((mbinptr)((char*)&(__malloc_av_[2*(120) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(120) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(121) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(121) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(122) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(122) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(123) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(123) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(124) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(124) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(125) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(125) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(126) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(126) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(127) + 2]) - 2*(sizeof(size_t)))), ((mbinptr)((char*)&(__malloc_av_[2*(127) + 2]) - 2*(sizeof(size_t))))
};
# 1682 "stdlib/mallocr.c"
 unsigned long __malloc_trim_threshold = (128L * 1024L);
 unsigned long __malloc_top_pad = (0);






 char* __malloc_sbrk_base = (char*)(-1);


 unsigned long __malloc_max_sbrked_mem = 0;


 unsigned long __malloc_max_total_mem = 0;


 struct mallinfo __malloc_current_mallinfo = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
# 2115 "stdlib/mallocr.c"
static void malloc_extend_top(struct _reent *reent_ptr, size_t nb)



{
  char* brk;
  size_t front_misalign;
  size_t correction;
  char* new_brk;
  size_t top_size;

  mchunkptr old_top = (((mbinptr)((char*)&(__malloc_av_[2*(0) + 2]) - 2*(sizeof(size_t))))->fd);
  size_t old_top_size = ((old_top)->size & ~((0x1|0x2)));
  char* old_end = (char*)(((mchunkptr)(((char*)(old_top)) + (old_top_size))));



  size_t sbrk_size = nb + __malloc_top_pad + (sizeof(struct malloc_chunk));
  unsigned long pagesz = (4096);





  if (__malloc_sbrk_base != (char*)(-1))
    sbrk_size = (sbrk_size + (pagesz - 1)) & ~(pagesz - 1);

  brk = (char*)(_sbrk_r(reent_ptr, (sbrk_size)));


  if (brk == (char*)(-1) ||
      (brk < old_end && old_top != ((mchunkptr)(((mbinptr)((char*)&(__malloc_av_[2*(0) + 2]) - 2*(sizeof(size_t))))))))
    return;

  (__malloc_current_mallinfo.arena) += sbrk_size;

  if (brk == old_end)
  {
    top_size = sbrk_size + old_top_size;
    (((((mbinptr)((char*)&(__malloc_av_[2*(0) + 2]) - 2*(sizeof(size_t))))->fd))->size = (top_size | 0x1));
  }
  else
  {
    if (__malloc_sbrk_base == (char*)(-1))
      __malloc_sbrk_base = brk;
    else
      (__malloc_current_mallinfo.arena) += brk - (char*)old_end;


    front_misalign = (unsigned long)((void*)((char*)(brk) + 2*(sizeof(size_t)))) & (((sizeof(size_t)) + (sizeof(size_t))) - 1);
    if (front_misalign > 0)
    {
      correction = (((sizeof(size_t)) + (sizeof(size_t)))) - front_misalign;
      brk += correction;
    }
    else
      correction = 0;


    correction += pagesz - ((unsigned long)(brk + sbrk_size) & (pagesz - 1));


    new_brk = (char*)(_sbrk_r(reent_ptr, (correction)));
    if (new_brk == (char*)(-1)) return;

    (__malloc_current_mallinfo.arena) += correction;

    (((mbinptr)((char*)&(__malloc_av_[2*(0) + 2]) - 2*(sizeof(size_t))))->fd) = (mchunkptr)brk;
    top_size = new_brk - brk + correction;
    (((((mbinptr)((char*)&(__malloc_av_[2*(0) + 2]) - 2*(sizeof(size_t))))->fd))->size = (top_size | 0x1));

    if (old_top != ((mchunkptr)(((mbinptr)((char*)&(__malloc_av_[2*(0) + 2]) - 2*(sizeof(size_t)))))))
    {





      if (old_top_size < (sizeof(struct malloc_chunk)))
      {
        (((((mbinptr)((char*)&(__malloc_av_[2*(0) + 2]) - 2*(sizeof(size_t))))->fd))->size = (0x1));
        return;
      }


      old_top_size = (old_top_size - 3*(sizeof(size_t))) & ~(((sizeof(size_t)) + (sizeof(size_t))) - 1);
      ((old_top)->size = (((old_top)->size & 0x1) | (old_top_size)));
      ((mchunkptr)(((char*)(old_top)) + (old_top_size)))->size =
        (sizeof(size_t))|0x1;
      ((mchunkptr)(((char*)(old_top)) + (old_top_size + (sizeof(size_t)))))->size =
        (sizeof(size_t))|0x1;

      if (old_top_size >= (sizeof(struct malloc_chunk)))
        _free_r(reent_ptr, ((void*)((char*)(old_top) + 2*(sizeof(size_t)))));
    }
  }

  if ((unsigned long)(__malloc_current_mallinfo.arena) > (unsigned long)__malloc_max_sbrked_mem)
    __malloc_max_sbrked_mem = (__malloc_current_mallinfo.arena);




  if ((unsigned long)((__malloc_current_mallinfo.arena)) > (unsigned long)__malloc_max_total_mem)
    __malloc_max_total_mem = (__malloc_current_mallinfo.arena);



  ((void)0);
}
# 2293 "stdlib/mallocr.c"
void* _malloc_r(struct _reent *reent_ptr, size_t bytes)



{
  mchunkptr victim;
  size_t victim_size;
  int idx;
  mbinptr bin;
  mchunkptr remainder;
  long remainder_size;
  int remainder_index;
  unsigned long block;
  int startidx;
  mchunkptr fwd;
  mchunkptr bck;
  mbinptr q;

  size_t nb = (((long)((bytes) + ((sizeof(size_t)) + (((sizeof(size_t)) + (sizeof(size_t))) - 1))) < (long)((sizeof(struct malloc_chunk)) + (((sizeof(size_t)) + (sizeof(size_t))) - 1))) ? (((sizeof(struct malloc_chunk)) + (((sizeof(size_t)) + (sizeof(size_t))) - 1)) & ~((((sizeof(size_t)) + (sizeof(size_t))) - 1))) : (((bytes) + ((sizeof(size_t)) + (((sizeof(size_t)) + (sizeof(size_t))) - 1))) & ~((((sizeof(size_t)) + (sizeof(size_t))) - 1))));

  __malloc_lock(reent_ptr);



  if ((nb < 512 - 8))
  {
    idx = (((unsigned long)(nb)) >> 3);



    q = ((mbinptr)((char*)&(__malloc_av_[2*(idx) + 2]) - 2*(sizeof(size_t))));
    victim = ((q)->bk);



    if (victim == q)
    {
      q = ((mbinptr)((char*)(q) + 2 * sizeof(mbinptr)));
      victim = ((q)->bk);
    }

    if (victim != q)
    {
      victim_size = ((victim)->size & ~((0x1|0x2)));
      { bck = victim->bk; fwd = victim->fd; fwd->bk = bck; bck->fd = fwd; };
      (((mchunkptr)(((char*)(victim)) + (victim_size)))->size |= 0x1);
      ;
      __malloc_unlock(reent_ptr);
      return ((void*)((char*)(victim) + 2*(sizeof(size_t))));
    }

    idx += 2;

  }
  else
  {
    idx = (((((unsigned long)(nb)) >> 9) == 0) ? (((unsigned long)(nb)) >> 3): ((((unsigned long)(nb)) >> 9) <= 4) ? 56 + (((unsigned long)(nb)) >> 6): ((((unsigned long)(nb)) >> 9) <= 20) ? 91 + (((unsigned long)(nb)) >> 9): ((((unsigned long)(nb)) >> 9) <= 84) ? 110 + (((unsigned long)(nb)) >> 12): ((((unsigned long)(nb)) >> 9) <= 340) ? 119 + (((unsigned long)(nb)) >> 15): ((((unsigned long)(nb)) >> 9) <= 1364) ? 124 + (((unsigned long)(nb)) >> 18): 126);
    bin = ((mbinptr)((char*)&(__malloc_av_[2*(idx) + 2]) - 2*(sizeof(size_t))));

    for (victim = ((bin)->bk); victim != bin; victim = victim->bk)
    {
      victim_size = ((victim)->size & ~((0x1|0x2)));
      remainder_size = ( (long)(victim_size - nb) );

      if (remainder_size >= (long)(sizeof(struct malloc_chunk)))
      {
        --idx;
        break;
      }

      else if (remainder_size >= 0)
      {
        { bck = victim->bk; fwd = victim->fd; fwd->bk = bck; bck->fd = fwd; };
        (((mchunkptr)(((char*)(victim)) + (victim_size)))->size |= 0x1);
        ;
 __malloc_unlock(reent_ptr);
        return ((void*)((char*)(victim) + 2*(sizeof(size_t))));
      }
    }

    ++idx;

  }



  if ( (victim = (((mbinptr)((char*)&(__malloc_av_[2*(1) + 2]) - 2*(sizeof(size_t)))))->fd) != (((mbinptr)((char*)&(__malloc_av_[2*(1) + 2]) - 2*(sizeof(size_t))))))
  {
    victim_size = ((victim)->size & ~((0x1|0x2)));
    remainder_size = ( (long)(victim_size - nb) );

    if (remainder_size >= (long)(sizeof(struct malloc_chunk)))
    {
      remainder = ((mchunkptr)(((char*)(victim)) + (nb)));
      ((victim)->size = (nb | 0x1));
      { (((mbinptr)((char*)&(__malloc_av_[2*(1) + 2]) - 2*(sizeof(size_t)))))->fd = (((mbinptr)((char*)&(__malloc_av_[2*(1) + 2]) - 2*(sizeof(size_t)))))->bk = remainder; remainder->fd = remainder->bk = (((mbinptr)((char*)&(__malloc_av_[2*(1) + 2]) - 2*(sizeof(size_t))))); };
      ((remainder)->size = (remainder_size | 0x1));
      (((mchunkptr)((char*)(remainder) + (remainder_size)))->prev_size = (remainder_size));
      ;
      __malloc_unlock(reent_ptr);
      return ((void*)((char*)(victim) + 2*(sizeof(size_t))));
    }

    ((((mbinptr)((char*)&(__malloc_av_[2*(1) + 2]) - 2*(sizeof(size_t)))))->fd = (((mbinptr)((char*)&(__malloc_av_[2*(1) + 2]) - 2*(sizeof(size_t)))))->bk = (((mbinptr)((char*)&(__malloc_av_[2*(1) + 2]) - 2*(sizeof(size_t))))));

    if (remainder_size >= 0)
    {
      (((mchunkptr)(((char*)(victim)) + (victim_size)))->size |= 0x1);
      ;
      __malloc_unlock(reent_ptr);
      return ((void*)((char*)(victim) + 2*(sizeof(size_t))));
    }



    { if (victim_size < 512) { remainder_index = (((unsigned long)(victim_size)) >> 3); ((((mbinptr)((char*)&(__malloc_av_[2*(0) + 2]) - 2*(sizeof(size_t))))->size) |= ((unsigned long)1 << (remainder_index / 4))); bck = ((mbinptr)((char*)&(__malloc_av_[2*(remainder_index) + 2]) - 2*(sizeof(size_t)))); fwd = bck->fd; victim->bk = bck; victim->fd = fwd; fwd->bk = bck->fd = victim; } else { remainder_index = (((((unsigned long)(victim_size)) >> 9) == 0) ? (((unsigned long)(victim_size)) >> 3): ((((unsigned long)(victim_size)) >> 9) <= 4) ? 56 + (((unsigned long)(victim_size)) >> 6): ((((unsigned long)(victim_size)) >> 9) <= 20) ? 91 + (((unsigned long)(victim_size)) >> 9): ((((unsigned long)(victim_size)) >> 9) <= 84) ? 110 + (((unsigned long)(victim_size)) >> 12): ((((unsigned long)(victim_size)) >> 9) <= 340) ? 119 + (((unsigned long)(victim_size)) >> 15): ((((unsigned long)(victim_size)) >> 9) <= 1364) ? 124 + (((unsigned long)(victim_size)) >> 18): 126); bck = ((mbinptr)((char*)&(__malloc_av_[2*(remainder_index) + 2]) - 2*(sizeof(size_t)))); fwd = bck->fd; if (fwd == bck) ((((mbinptr)((char*)&(__malloc_av_[2*(0) + 2]) - 2*(sizeof(size_t))))->size) |= ((unsigned long)1 << (remainder_index / 4))); else { while (fwd != bck && victim_size < ((fwd)->size & ~((0x1|0x2)))) fwd = fwd->fd; bck = fwd->bk; } victim->bk = bck; victim->fd = fwd; fwd->bk = bck->fd = victim; } };
  }






  if ( (block = ((unsigned long)1 << (idx / 4))) <= (((mbinptr)((char*)&(__malloc_av_[2*(0) + 2]) - 2*(sizeof(size_t))))->size))
  {



    if ( (block & (((mbinptr)((char*)&(__malloc_av_[2*(0) + 2]) - 2*(sizeof(size_t))))->size)) == 0)
    {

      idx = (idx & ~(4 - 1)) + 4;
      block <<= 1;
      while ((block & (((mbinptr)((char*)&(__malloc_av_[2*(0) + 2]) - 2*(sizeof(size_t))))->size)) == 0)
      {
        idx += 4;
        block <<= 1;
      }
    }


    for (;;)
    {
      startidx = idx;
      q = bin = ((mbinptr)((char*)&(__malloc_av_[2*(idx) + 2]) - 2*(sizeof(size_t))));


      do
      {


        for (victim = ((bin)->bk); victim != bin; victim = victim->bk)
        {
          victim_size = ((victim)->size & ~((0x1|0x2)));
          remainder_size = ( (long)(victim_size - nb) );

          if (remainder_size >= (long)(sizeof(struct malloc_chunk)))
          {
            remainder = ((mchunkptr)(((char*)(victim)) + (nb)));
            ((victim)->size = (nb | 0x1));
            { bck = victim->bk; fwd = victim->fd; fwd->bk = bck; bck->fd = fwd; };
            { (((mbinptr)((char*)&(__malloc_av_[2*(1) + 2]) - 2*(sizeof(size_t)))))->fd = (((mbinptr)((char*)&(__malloc_av_[2*(1) + 2]) - 2*(sizeof(size_t)))))->bk = remainder; remainder->fd = remainder->bk = (((mbinptr)((char*)&(__malloc_av_[2*(1) + 2]) - 2*(sizeof(size_t))))); };
            ((remainder)->size = (remainder_size | 0x1));
            (((mchunkptr)((char*)(remainder) + (remainder_size)))->prev_size = (remainder_size));
            ;
     __malloc_unlock(reent_ptr);
            return ((void*)((char*)(victim) + 2*(sizeof(size_t))));
          }

          else if (remainder_size >= 0)
          {
            (((mchunkptr)(((char*)(victim)) + (victim_size)))->size |= 0x1);
            { bck = victim->bk; fwd = victim->fd; fwd->bk = bck; bck->fd = fwd; };
            ;
     __malloc_unlock(reent_ptr);
            return ((void*)((char*)(victim) + 2*(sizeof(size_t))));
          }

        }

       bin = ((mbinptr)((char*)(bin) + 2 * sizeof(mbinptr)));
# 2482 "stdlib/mallocr.c"
      } while ((++idx & (4 - 1)) != 0);



      do
      {
        if ((startidx & (4 - 1)) == 0)
        {
          (((mbinptr)((char*)&(__malloc_av_[2*(0) + 2]) - 2*(sizeof(size_t))))->size) &= ~block;
          break;
        }
        --startidx;
       q = ((mbinptr)((char*)(q) - 2 * sizeof(mbinptr)));
      } while (((q)->fd) == q);



      if ( (block <<= 1) <= (((mbinptr)((char*)&(__malloc_av_[2*(0) + 2]) - 2*(sizeof(size_t))))->size) && (block != 0) )
      {
        while ((block & (((mbinptr)((char*)&(__malloc_av_[2*(0) + 2]) - 2*(sizeof(size_t))))->size)) == 0)
        {
          idx += 4;
          block <<= 1;
        }
      }
      else
        break;
    }
  }





  remainder_size = ( (long)((((((mbinptr)((char*)&(__malloc_av_[2*(0) + 2]) - 2*(sizeof(size_t))))->fd))->size & ~((0x1|0x2))) - nb) );
  if ((((((mbinptr)((char*)&(__malloc_av_[2*(0) + 2]) - 2*(sizeof(size_t))))->fd))->size & ~((0x1|0x2))) < nb || remainder_size < (long)(sizeof(struct malloc_chunk)))
  {
# 2531 "stdlib/mallocr.c"
    malloc_extend_top(reent_ptr, nb);
    remainder_size = ( (long)((((((mbinptr)((char*)&(__malloc_av_[2*(0) + 2]) - 2*(sizeof(size_t))))->fd))->size & ~((0x1|0x2))) - nb) );
    if ((((((mbinptr)((char*)&(__malloc_av_[2*(0) + 2]) - 2*(sizeof(size_t))))->fd))->size & ~((0x1|0x2))) < nb || remainder_size < (long)(sizeof(struct malloc_chunk)))
    {
      __malloc_unlock(reent_ptr);
      return 0;
    }
  }

  victim = (((mbinptr)((char*)&(__malloc_av_[2*(0) + 2]) - 2*(sizeof(size_t))))->fd);
  ((victim)->size = (nb | 0x1));
  (((mbinptr)((char*)&(__malloc_av_[2*(0) + 2]) - 2*(sizeof(size_t))))->fd) = ((mchunkptr)(((char*)(victim)) + (nb)));
  (((((mbinptr)((char*)&(__malloc_av_[2*(0) + 2]) - 2*(sizeof(size_t))))->fd))->size = (remainder_size | 0x1));
  ;
  __malloc_unlock(reent_ptr);
  return ((void*)((char*)(victim) + 2*(sizeof(size_t))));

}
# 3384 "stdlib/mallocr.c"
extern void __malloc_update_mallinfo(void);
