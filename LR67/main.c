#include <stdio.h>

int main()
{
    int day;
    scanf("%d", &day);
    if(day < 31)
    {
        int res = day % 7;
        if(res == 0)
        {
            printf("Sunday");
        }
        else if(res == 1)
        {
            printf("Monday");
        }
        else if(res == 2)
        {
            printf("Tuesday");
        }
        else if(res == 3)
        {
            printf("Wednesday");
        }
        else if(res == 4)
        {
            printf("Thursday");
        }
        else if(res == 5)
        {
            printf("Friday");
        }
        else if(res == 6)
        {
            printf("Saturday");
        }
    }
    else
    {
        printf("R U MFUKIN KIDDING ME, MONTH HEZ ONLY 30 DAYZ");
    }
}
