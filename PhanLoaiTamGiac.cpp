#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if (a <= 0 || b <= 0 || c <= 0)
    {
        printf("Khong hop le\n");
    }
    else
    {
        if (a + b > c && a + c > b && b + c > a)
        {
            if (a==b && a==c)
            {
                printf("(%.2lf, %.2lf, %.2lf) la tam giac deu\n",a,b,c);
            }
            else if (a==b || a==c || b==c)
            {
                printf("(%.2lf, %.2lf, %.2lf) la tam giac can\n",a,b,c);
            }
            else if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b))
            {
                printf("(%.2lf, %.2f, %.2lf) la tam giac vuong\n",a,b,c);
            }
            else if(((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b)) && (a==b || a==c || b==c))
            {
                printf("(%.2lf, %.2lf, %.2lf) la tam giac vuong can\n",a,b,c);
            }
            else
            {
                printf("(%.2lf, %.2lf, %.2lf) la tam giac thuong\n",a,b,c);
            }
            double C=0;
            C = a+b+c;
            printf("Chu vi tam giac = %.2lf\n",C);
            double S=0, P=0;
            P = (a + b + c) / 2;
            S= sqrt(P * (P - a) * (P - b) * (P - c));
            printf("Dien tich tam giac = %.2lf\n",S);
        }
        else
        {
            printf("Khong hop le\n");
        }
    }
    return 0;
}