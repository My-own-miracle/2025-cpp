#include <cstdio>

int main(int argc, char **argv)
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a, &b, &c);
    printf("%lld", (long long int) a + b + c);
    return 0;
}