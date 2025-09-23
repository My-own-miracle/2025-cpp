#include <cstdio>

int main(int argc, char** argv)
{
    int k;
    int n;
    scanf("%d %d", &k, &n);
    int column = (n - 0.01) / k + 1;
    int line = (n - 0.01) / k;
    line = n - line * k;
    printf("%d %d", column, line);
    return 0;
}