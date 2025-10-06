#include <cstdio>

int main(int argc, char** argv)
{
    int a = 0;
    scanf("%d", &a);
    int result = (a - 0.01) / 10 + 1;
    printf("%d", result);
    return 0;
}