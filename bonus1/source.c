
undefined4 main(undefined4 param_1,int param_2)

{
  int ok;
  char buff [40];
  int n;
  
  n = atoi(av[1]);
  if (n < 10) {
    memcpy(buff, av[2], n * 4);
    if (n == 0x574f4c46) {
      execl("/bin/sh", "sh", 0);
    }
    ok = 0;
  }
  else {
    ok = 1;
  }
  return ok;
}

