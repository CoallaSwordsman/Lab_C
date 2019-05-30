#include <stdio.h>

int main()
{
    int b[20] = {0};
    int sum = 0;
    int size = 0;
    for (int i = 0; i < sizeof (b); i++)
    {
        scanf("%d", &b[i]);
        if(b[i] <= 0)
        {
            break;
        }
        sum += b[i];
        size++;
    }
    float res = sum / size;
    printf("%f", res);
}
