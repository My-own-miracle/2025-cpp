#include <cstdio>

int main(int argc, char** argv)
{
    int a = 0;
    scanf("%d", &a);
    int sum1 = a / 100000 + (a / 10000) % 10 + (a / 1000) % 10;
    int sum2 = (a / 100) % 10 + (a / 10) % 10 + a % 10;
    if (sum1 == sum2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}