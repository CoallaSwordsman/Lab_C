#include <stdio.h>

int main()
{
    double sum = 0;
    for(int i = 1; i < 51; i++)
    {
        sum += (1.0 / i);
    }
    printf("%f", sum);
}
