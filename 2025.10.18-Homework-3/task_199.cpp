#include <cstdio>

int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    while (a > 0 && b > 0)
    {
        if (a < b)
        {
            b = b % a;
        }
        else
        {
            a = a % b;
        }
    }
    int nod = a + b;
    printf("%d", a * b / nod);
    return 0;
}