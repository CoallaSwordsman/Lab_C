#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("INPUT DAMN VECTOR DUSHBAG\n");
    scanf("%d", &a);
    scanf("%d", &b);
    if(a > 0 & b > 0)
    {
        printf("ITS QUADRANT I\n");
    }
    else if(a > 0 & b < 0)
    {
        printf("ITS QUADRANT II\n");
    }
    else if(a < 0 & b < 0)
    {
        printf("ITS QUADRANT III\n");
    }
    else if(a < 0 & b > 0)
    {
        printf("ITS QUADRANT IV\n");
    }
    else
    {
        printf("ITZ DAMMIT ZER0 OR ITZ ON THE AXIZZZ\n");
    }
    return 0;
}
