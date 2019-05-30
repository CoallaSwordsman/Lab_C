#include <stdio.h>

int main()
{
    float sum = 0;
    for(int i = 1; i < 51; i++)
    {
        sum += (1 / i);
        printf(" sum %f\n", sum);
        printf(" i %f\n", i);
    }
    printf("%f", sum);
}
