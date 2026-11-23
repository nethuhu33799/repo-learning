// Argument - call by value from 1.2

#include <stdio.h>

void temperature(int lo, int hi, int s);

int main()
{
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    temperature(lower, upper, step);
    return 0;
}
void temperature(int fahr, int hi, int s)
{
    int celsius;
    while (fahr <= hi)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + s;
    }
    
}
