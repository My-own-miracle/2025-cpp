#include <cstdio>

int main(int argc, char** argv)
{
    int n = 0;
    scanf("%d", &n);
    if (n % 2 == 0 || n == 1)
    {
        printf("%d", n / 2);
    }
    else
    {
        printf("%d", n);
    }
    return 0;
}