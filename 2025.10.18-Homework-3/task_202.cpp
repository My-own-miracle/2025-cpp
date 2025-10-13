#include <cstdio>
#include <cmath>

int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    for (int i = -100; i <= 100; ++i)
    {
        if (a * pow(i, 3) + b * pow(i,2) + c * i + d == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}