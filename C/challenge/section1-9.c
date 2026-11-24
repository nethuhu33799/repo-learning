#include <stdio.h>

#define MAXLINE 1000

int get_line(char s[], int limit);
void copy(char to[], char from[]);

int main()
{
    int max, len;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;

    while ((len = get_line(line, MAXLINE)) > 0)
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    if (max > 0)
    {
        printf("%s\n", longest);
    }

    return 0;
}

int get_line(char s[], int limit)
{
    int i = 0;
    int c;
    while ((c = getchar()) != EOF && c != '\n' && i < limit - 1)
    {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[])
{
    int i = 0;
    while ((to[i] = from[i]) != '\0')
        i++;
}