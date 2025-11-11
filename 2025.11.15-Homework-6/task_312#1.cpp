#include <cstdio>

int phi(int n);

int main(int argc, char** argv)
{
    int n = 0;
    scanf("%d", &n);
    printf("%d", phi(n));
}

int phi(int n)
{
    if (n > 1)
    {
        return phi(n - 2) + phi(n - 1);
    }
    else 
    {
        return 1;
    }
}