#include <stdio.h>
int main()
{
    int c;
    while ((c = getchar()) != EOF)
    {
        printf("\n");
        printf("%d", c);
        printf("\n");
    }
}