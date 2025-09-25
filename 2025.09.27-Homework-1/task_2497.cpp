#include <cstdio>

int main(int argc, char **argv)
{
    int a;
    int b;
    int c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%lld", (long long int) a + b + c);
    return 0;
}