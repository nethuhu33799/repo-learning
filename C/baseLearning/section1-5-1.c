#include <stdio.h>
int main()
{
    int c;
    c = getchar();
    while (c != EOF) // signal [end of file] -> EOF
    {
        putchar(c);
        c = getchar();
    }
}