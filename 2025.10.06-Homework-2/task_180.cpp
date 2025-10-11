#include <cstdio>
#include <cmath>

int main(int argc, char** argv)
{
    double a = 0;
    double b = 0;
    double c = 0;
    scanf("%lf %lf %lf", &a, &b, &c);
    double x1 = 0;
    double x2 = 0;
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                printf("-1");
            }
            else
            {
                printf("0");
            }
        }
        else
        {
            printf("1\n");
            x1 = -c / b;
            printf("%lf", x1);
        }
        return 0;
    }
    double d = pow(b, 2) - 4 * a * c;
    if (d == 0)
    {
        printf("1\n");
        x1 = (-b) / (2 * a);
        printf("%lf", x1);
    }
    else if (d > 0)
    {
        printf("2\n");
        x1 = (-b + pow(d, 0.5)) / (2 * a);
        x2 = (-b - pow(d, 0.5)) / (2 * a);
        printf("%lf\n", x1);
        printf("%lf", x2);
    }
    else
    {
        printf("0");
    }
    return 0;
}