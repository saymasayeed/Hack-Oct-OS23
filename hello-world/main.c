#include <stdio.h>
#include <stdlib.h>

int main() {
    char *h = (char *)malloc(4);
    char *e = (char *)malloc(4);
    char *l1 = (char *)malloc(4);
    char *l2 = (char *)malloc(4);
    char *o = (char *)malloc(4);
    *h = 72;  // 'H'
    *e = 101; // 'e'
    *l1 = 108; // 'l'
    *l2 = 108; // 'l'
    *o = 111; // 'o'

    char *comma = (char *)calloc(1, sizeof(char));
    char *space = (char *)calloc(1, sizeof(char));
    char *w = (char *)calloc(4, sizeof(char));
    char *r = (char *)calloc(4, sizeof(char));
    char *ld = (char *)calloc(4, sizeof(char));
    char *exclamation = (char *)calloc(1, sizeof(char));

    *comma = 44; // ','
    *space = 32; // ' '
    *w = 87; // 'W'
    *r = 114; // 'r'
    *ld = 108; // 'l'
    *exclamation = 33; // '!'

    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", *h, *e, *l1, *l2, *o, *comma, *space, *w, *o, *r, *l1, *l2, *ld, *exclamation, *space, *exclamation, *space, *exclamation);

    free(h);
    free(e);
    free(l1);
    free(l2);
    free(o);
    free(comma);
    free(space);
    free(w);
    free(r);
    free(ld);
    free(exclamation);

    return 0;
}

