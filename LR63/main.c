#include <stdio.h>

int main()
{
    printf("INPUT NUMBA OF LINEZ, NIBBA!\n");
    int num;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        for (int j = (i * 3) + 1; j < (i *3) + 4; j++)
        {
            printf("%d    ", j);
        }
        printf("\n");
    }
    return 0;
}
