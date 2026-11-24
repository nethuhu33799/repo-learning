#include <stdio.h>
#define MAXTEXT 100

void revert_s(char to[], char from[], int n);

int main()
{
    int c, i;
    i = 0;
    char text[MAXTEXT];
    char revert_text[MAXTEXT];
    while ((c = getchar()) != EOF && c != '\0')
    {
        text[i] = c;
        i++;
    }
    text[i] = '\0';
    revert_s(revert_text, text, i);
    printf("\n%s",revert_text);
    return 0;
}

void revert_s(char to[], char from[], int n)
{
    int i = 0;
    while ((to[i] = from[n]) && to[i] != '\0')
    {
        i++;
        n--;
    }
}