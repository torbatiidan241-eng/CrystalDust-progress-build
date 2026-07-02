# 0 "stdio/flags.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "stdio/flags.c"
# 20 "stdio/flags.c"
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
# 21 "stdio/flags.c" 2

# 1 "include/fcntl.h" 1
# 1 "include/sys/fcntl.h" 1
# 139 "include/sys/fcntl.h"
struct flock {
 short l_type;
 short l_whence;
 long l_start;
 long l_len;
 short l_pid;
 short l_xxx;
};



struct eflock {
 short l_type;
 short l_whence;
 long l_start;
 long l_len;
 short l_pid;
 short l_xxx;
 long l_rpid;
 long l_rsys;
};



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
# 164 "include/sys/fcntl.h" 2
# 1 "include/sys/stat.h" 1
# 25 "include/sys/stat.h"
struct stat
{
  dev_t st_dev;
  ino_t st_ino;
  mode_t st_mode;
  nlink_t st_nlink;
  uid_t st_uid;
  gid_t st_gid;
  dev_t st_rdev;
  off_t st_size;






  time_t st_atime;
  long st_spare1;
  time_t st_mtime;
  long st_spare2;
  time_t st_ctime;
  long st_spare3;
  long st_blksize;
  long st_blocks;
  long st_spare4[2];

};
# 119 "include/sys/stat.h"
int chmod ( const char *__path, mode_t __mode );
int fchmod (int __fd, mode_t __mode);
int fstat ( int __fd, struct stat *__sbuf );
int mkdir ( const char *_path, mode_t __mode );
int mkfifo ( char *__path, mode_t __mode );
int stat ( const char *__path, struct stat *__sbuf );
mode_t umask ( mode_t __mask );



int _fstat ( int __fd, struct stat *__sbuf );
int _stat ( const char *__path, struct stat *__sbuf );
# 165 "include/sys/fcntl.h" 2

extern int open (const char *, int, ...);
extern int creat (const char *, mode_t);
extern int fcntl (int, int, ...);



extern int _open (const char *, int, ...);
extern int _fcntl (int, int, ...);
# 2 "include/fcntl.h" 2
# 23 "stdio/flags.c" 2

# 1 "include/errno.h" 1
# 1 "include/sys/errno.h" 1
# 15 "include/sys/errno.h"
extern int *__errno (void);



extern const char * const _sys_errlist[];
extern int _sys_nerr;
# 2 "include/errno.h" 2
# 25 "stdio/flags.c" 2
# 33 "stdio/flags.c"
int
__sflags (ptr, mode, optr)
     struct _reent *ptr;
     register char *mode;
     int *optr;
{
  register int ret, m, o;

  switch (mode[0])
    {
    case 'r':
      ret = 0x0004;
      m = 0;
      o = 0;
      break;

    case 'w':
      ret = 0x0008;
      m = 1;
      o = 0x0200 | 0x0400;
      break;

    case 'a':
      ret = 0x0008 | 0x0100;
      m = 1;
      o = 0x0200 | 0x0008;
      break;
    default:
      ptr->_errno = 22;
      return (0);
    }
  if (mode[1] == '+' || mode[2] == '+')
    {
      ret = 0x0010;
      m = 2;
    }
  if (mode[1] == 'b' || mode[2] == 'b')
    {



    }
  else if (mode[1] == 't' || mode[2] == 't')
    {



    }
  *optr = m | o;
  return ret;
}
