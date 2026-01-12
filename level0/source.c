#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char **argv) {
    if (atoi(argv[1]) == 423) {
        char *args[] = {"/bin/sh", NULL};
        gid_t gid = getegid();
        uid_t uid = geteuid();

        setresgid(gid, gid, gid);
        setresuid(uid, uid, uid);
        execv("/bin/sh", args);
    } else {
        fprintf(stderr, "No !\n");
    }
    return 0;
}