#include <stdio.h>
#include <stdlib.h>


void main(int argc, char **argv)
{
    char *dst;
    void (*fn)(void);

    dst = malloc(64);
    fn  = malloc(sizeof(void *));

    *fn = m;

    strcpy(dst, argv[1]);
    fn();

    return;
}

void m(void *argc,int param_2,char *param_3,int param_4,int param_5)
{
  puts("Nope");
  return;
}


void n(void)
{
  system("/bin/cat /home/user/level7/.pass");
  return;
}