#include <cstdio>

int main(int argc, char** argv)
{
    int n;
    scanf("%d", &n);
    printf("%lld", (long long int) ((n + 1) / 2) * ((n + 1) / 2));
    return 0;
}