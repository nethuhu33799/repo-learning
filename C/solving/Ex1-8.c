#include <stdio.h>
int main()
{
    int c, nl, tc, bc;
    nl = tc = bc = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
            ++tc;
        if (c == '\n')
            ++nl;
        if (c == ' ')
            ++bc;
    }
    printf("\n");
    printf("blank: %d, tab: %d, newline: %d\n", bc, tc, nl);
}