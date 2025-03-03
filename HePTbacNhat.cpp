
#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, e, c, d, f;
    scanf("%lf %lf %lf", &a, &b, &e);
    scanf("%lf %lf %lf", &c, &d, &f);
    double D = a * d - b * c;
    if (D != 0)
    {
        double x = (e * d - b * f) / D;
        double y = (a * f - e * c) / D;
        printf("He phuong trinh co nghiem duy nhat\n");
        printf("x = %.f\n", x);
        printf("y = %.f\n", y);
    }
    else
    {
        if (e * d - b * f == 0 && a * f - e * c == 0)
        {
            printf("He phuong trinh co vo so nghiem\n");
        }
        else
        {
            printf("He phuong trinh vo nghiem\n");
        }
    }
    return 0;
}
 
