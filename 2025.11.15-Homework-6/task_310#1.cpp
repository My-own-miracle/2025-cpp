#include <cstdio>

double power(double a, int n);

int main(int argc, char** argv)
{
    double a = 0;
    int n = 0;
    scanf("%lf %d", &a, &n);
    printf("%lf", power(a, n));
}

double power(double a, int n)
{
    double s = 1.0;
    if (n == 0)
    {
        return s;
    }
    else if (n < 0)
    {
        n = -n;
        for (int i = 0; i < n; ++i)
        {
            s /= a;
        }
    }
    else
    {
        for (int i = 0; i < n; ++i)
        {
            s *= a;
        }
    }
    return s;
}