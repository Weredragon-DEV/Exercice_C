#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char ligne[256];

    if (argc != 2) return 2;                

    if (!fgets(ligne, sizeof ligne, stdin))
        return 1;

    return strstr(ligne, argv[1]) ? 0 : 1;
}
