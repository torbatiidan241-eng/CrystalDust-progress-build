# 0 "misc/ffs.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "misc/ffs.c"
# 27 "misc/ffs.c"
int
ffs (word)
     int word;
{
  int i;

  if (!word)
    return 0;

  i = 0;
  for (;;)
    {
      if (((1 << i++) & word) != 0)
 return i;
    }
}
