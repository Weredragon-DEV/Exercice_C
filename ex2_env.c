#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s NOM_VARIABLE\n", argv[0]);
        return 2;
    }
    const char *val = getenv(argv[1]);
    if (!val) {
        fprintf(stderr, "Erreur: la variable d'environnement \"%s\" n'existe pas :(\n", argv[1]);
        return 1;
    }
    puts(val);
    return 0;
}
