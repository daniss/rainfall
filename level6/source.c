#include <stdio.h>
#include <stdlib.h>

void main(undefined4 param_1,int param_2)

{
  char *__dest;
  undefined4 *puVar1;
  
  __dest = (char *)malloc(0x40);
  puVar1 = (undefined4 *)malloc(4);
  *puVar1 = m;
  strcpy(__dest,*(char **)(param_2 + 4));
  // can be seen as strcpy(__dest, argv[1]);
  // param_2 is argv
  // param_2 + 4 → argv[1]
  // strcpy does not check length
  // __dest is only 64 bytes
  // If argv[1] > 64 bytes → heap buffer overflow
  (*(code *)*puVar1)();
  return;
}


void m(void *param_1,int param_2,char *param_3,int param_4,int param_5)

{
  puts("Nope");
  return;
}


void n(void)

{
  system("/bin/cat /home/user/level7/.pass");
  return;
}