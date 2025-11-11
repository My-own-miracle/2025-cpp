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
    if (n % 2 == 1)
    {
        return a * power(a * a, (n - 1) / 2);
    }
    else if (n == 0)
    {
        return 1;
    }
    else 
    {
        return power(a * a, n / 2);
    }
}