#include <cstdio>

int main(int argc, char** argv)
{
    int a;
    int b;
    scanf("%d %d", &a, &b);
    printf("%d", (a % b) * (b % a) + 1);
    return 0;
}