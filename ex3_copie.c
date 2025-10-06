#include <stdio.h>

int main(void) {
    char buf[4096];
    while (fgets(buf, sizeof buf, stdin)) {
        fputs(buf, stdout);
        fputs(buf, stderr);
    }
    return ferror(stdin) ? 1 : 0;
}

