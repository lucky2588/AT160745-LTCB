#include <stdio.h>
int main()
{
    double n;
    scanf("%lf",&n);
    if(n>0 && n<=10)
    {
        if(n<5)
        {
            printf("%.2lf: Yeu",n);
        }
        else if(n>=5 && n<7)
        {
            printf("%.2lf TB",n);
        }
        else if(n>=7 && n<8)
        {
            printf("%.2lf: Kha",n);
        }
        else if(n>=8 && n<9)
        {
            printf("%.2lf: Gioi",n);
        }
        else
        {
            printf("%.2lf: Xuat sac",n);
        }
    }
    else
    {
        printf("Khong hop le");
    }
    return 0;
}