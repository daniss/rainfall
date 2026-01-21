
int main(int argc,char **argv)

{
  int uVar1;
  int n;
  char *pcVar1;
  char bVar3;
  char str1 [65];
  undefined1 local_57;
  char str2 [66];
  FILE *fd;
  
  bVar3 = '\0';
  fd = fopen("/home/user/end/.pass","r");
  pcVar1 = str1;
  for (n = 0x21; n != 0; n = n + -1) {
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1 = pcVar1 + ((uint)(byte)bVar3 * -2 + 1) * 4;
  }
  if ((fd == (FILE *)0x0) || (argc != 2)) {
    uVar1 = -1;
  }
  else {
    fread(str1,1,66,fd);
    local_57 = 0;
    n = atoi(argv[1]);
    str1[n] = '\0';
    fread(str2,1,65,fd);
    fclose(fd);
    n = strcmp(str1,argv[1]);
    if (n == 0) {
      execl("/bin/sh","sh",0);
    }
    else {
      puts(str2);
    }
    uVar1 = 0;
  }
  return uVar1;
}

