# 0 "string/strerror.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "string/strerror.c"
# 244 "string/strerror.c"
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
# 245 "string/strerror.c" 2
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
# 246 "string/strerror.c" 2

char *
strerror(int errnum)

{
  char *error;
  extern char *_user_strerror (int);

  switch (errnum)
    {


    case 1:
      error = "Not owner";
      break;


    case 2:
      error = "No such file or directory";
      break;


    case 3:
      error = "No such process";
      break;


    case 4:
      error = "Interrupted system call";
      break;


    case 5:
      error = "I/O error";
      break;



    case 6:
      error = "No such device or address";
      break;


    case 7:
      error = "Arg list too long";
      break;


    case 8:
      error = "Exec format error";
      break;


    case 9:
      error = "Bad file number";
      break;


    case 10:
      error = "No children";
      break;


    case 11:
      error = "No more processes";
      break;


    case 12:
      error = "Not enough space";
      break;


    case 13:
      error = "Permission denied";
      break;


    case 14:
      error = "Bad address";
      break;


    case 15:
      error = "Block device required";
      break;


    case 16:
      error = "Device or resource busy";
      break;


    case 17:
      error = "File exists";
      break;


    case 18:
      error = "Cross-device link";
      break;


    case 19:
      error = "No such device";
      break;


    case 20:
      error = "Not a directory";
      break;


    case 21:
      error = "Is a directory";
      break;


    case 22:
      error = "Invalid argument";
      break;


    case 23:
      error = "Too many open files in system";
      break;


    case 24:
      error = "Too many open files";
      break;


    case 25:
      error = "Not a character device";
      break;


    case 26:
      error = "Text file busy";
      break;


    case 27:
      error = "File too large";
      break;


    case 28:
      error = "No space left on device";
      break;


    case 29:
      error = "Illegal seek";
      break;


    case 30:
      error = "Read-only file system";
      break;


    case 31:
      error = "Too many links";
      break;


    case 32:
      error = "Broken pipe";
      break;


    case 33:
      error = "Math argument";
      break;


    case 34:
      error = "Result too large";
      break;


    case 35:
      error = "No message of desired type";
      break;


    case 36:
      error = "Identifier removed";
      break;


    case 45:
      error = "Deadlock";
      break;


    case 46:
      error = "No lock";
      break;


    case 60:
      error = "Not a stream";
      break;


    case 62:
      error = "Stream ioctl timeout";
      break;


    case 63:
      error = "No stream resources";
      break;


    case 64:
      error = "Machine is not on the network";
      break;


    case 65:
      error = "No package";
      break;


    case 66:
      error = "Resource is remote";
      break;


    case 67:
      error = "Virtual circuit is gone";
      break;


    case 68:
      error = "Advertise error";
      break;


    case 69:
      error = "Srmount error";
      break;


    case 70:
      error = "Communication error";
      break;


    case 71:
      error = "Protocol error";
      break;


    case 74:
      error = "Multihop attempted";
      break;


    case 77:
      error = "Bad message";
      break;


    case 83:
      error = "Cannot access a needed shared library";
      break;


    case 84:
      error = "Accessing a corrupted shared library";
      break;


    case 85:
      error = ".lib section in a.out corrupted";
      break;


    case 86:
      error = "Attempting to link in more shared libraries than system limit";
      break;


    case 87:
      error = "Cannot exec a shared library directly";
      break;


    case 88:
      error = "Function not implemented";
      break;


    case 89:
      error = "No more files";
      break;


    case 90:
      error = "Directory not empty";
      break;


    case 91:
      error = "File or path name too long";
      break;


    case 92:
      error = "Too many symbolic links";
      break;


    case 105:
      error = "No buffer space available";
      break;


    case 106:
      error = "Address family not supported by protocol family";
      break;


    case 107:
      error = "Protocol wrong type for socket";
      break;


    case 108:
      error = "Socket operation on non-socket";
      break;


    case 109:
      error = "Protocol not available";
      break;


    case 110:
      error = "Can't send after socket shutdown";
      break;


    case 111:
      error = "Connection refused";
      break;


    case 112:
      error = "Address already in use";
      break;


    case 113:
      error = "Software caused connection abort";
      break;

    default:
      if ((error = _user_strerror (errnum)) == 0)
 error = "";
      break;
    }

  return error;
}
