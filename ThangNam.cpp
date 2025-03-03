#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    if(a<1 || a>12 || b<1)
    {
        return 0;
    }
    int day_of_month;
    if(a==2)
    {
        if(b%400==0 || b%4==0 && b%100!=0)
        {
            day_of_month = 29;
        }
        else
        {
            day_of_month = 28;
        }
    }
    else if(a==4 || a==6 || a==9 || a==11)
    {
        day_of_month = 30;
    }
    else
    {
        day_of_month = 31;
    }
    printf("Thang %d nam %d co %d ngay",a,b,day_of_month);
    return 0;
}