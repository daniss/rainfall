#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* global variable */
char *c;

int main(int argc, char **argv)
{
    int *obj1;
    int *obj2;
    FILE *fd;

    obj1 = malloc(8);
    obj1[0] = 1;
    obj1[1] = (int)malloc(8);

    obj2 = malloc(8);
    obj2[0] = 2;
    obj2[1] = (int)malloc(8);

    strcpy((char *)obj1[1], argv[1]);
    strcpy((char *)obj2[1], argv[2]);

    fd = fopen("/home/user/level8/.pass", "r");
    fgets(c, 0x44, fd);

    puts("~~");
    return 0;
}

void m(void *unused, int unused2, char *unused3, int unused4, int unused5)
{
    time_t t;

    t = time(NULL);
    printf("%s - %ld\n", c, t);
}
