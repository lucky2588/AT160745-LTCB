#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
 
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                printf("Moi x la nghiem\n");
            }
            else
            {
                printf("Phuong trinh vo nghiem\n");
            }
        }
        else
        {
            printf("Phuong trinh co 1 nghiem don\nx = %.5lf\n", -c / b);
        }
    }
    else
    {
        double delta, x1, x2;
        delta = b * b - 4 * a * c;
 
        if (delta > 0)
        {
            x1 = (-b - sqrt(delta)) / (2 * a);
            x2 = (-b + sqrt(delta)) / (2 * a);
            printf("Phuong trinh co 2 nghiem phan biet\nx1 = %.5lf\nx2 = %.5lf\n", x1, x2);
        }
        else if (delta == 0)
        {
            x1 = x2 = -b / (2 * a);
            printf("Phuong trinh co nghiem kep\nx1 = x2 = %.5lf\n", x1);
        }
        else
        {
            printf("Phuong trinh vo nghiem\n");
        }
    }
    return 0;
}