#include <cstdio>

int main(int argc, char** argv)
{
    double x = 0;
    double y = 0;
    scanf("%lf %lf", &x, &y);
    int day = 1;
    while (y - x > 0.0000001)
    {
        x *= 1.15;
        day += 1;
    }
    printf("%d", day);
    return 0;
}