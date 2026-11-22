#include <stdio.h>
#include <stdlib.h>
int g_init = 7;          /* data */
int g_zero;              /* bss  */
int main(void) {
    static int s = 1;    /* data */
    int local = 3;       /* stack */
    int *h = malloc(sizeof *h);   /* heap */
    const char *lit = "hi";       /* rodata */
    printf("\"hi\" literal  %p\n", (void *)lit);
    printf("g_init        %p\n", (void *)&g_init);
    printf("static s      %p\n", (void *)&s);
    printf("g_zero        %p\n", (void *)&g_zero);
    printf("heap *h       %p\n", (void *)h);
    printf("local         %p\n", (void *)&local);
    free(h);
    return 0;
}