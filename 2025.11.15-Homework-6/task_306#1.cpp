#include <cstdio>

int min(int a, int b, int c, int d);

int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d", min(a, b, c, d));
    return 0;
}

int min(int a, int b, int c, int d)
{
    int p1 = (a < b ? a : b);
    int p2 = (c < d ? c : d);
    return (p1 < p2 ? p1 : p2);
}