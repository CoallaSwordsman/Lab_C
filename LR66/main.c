#include <stdio.h>
#include <math.h>
int main()
{
    printf("n      2^n      2^(-n)\n");
    for(int i = 0; i < 11; i++)
    {
        double sqr = pow(2.0, -i);
        int quad = pow(2, i);
        printf("%d   %d   %f\n", i, quad, sqr);
    }
}
