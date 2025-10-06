#include <cstdio>

int main(int argc, char** argv)
{
    int v = 0;
    int t = 0;
    scanf("%d %d", &v, &t);
    int d = (v * t) % 109;
    int result = (d + 109) % 109 + 1;
    printf("%d", result);
    return 0;
}