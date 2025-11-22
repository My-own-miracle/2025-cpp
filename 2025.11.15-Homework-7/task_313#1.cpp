#include <cstdio>

int binom(int n, int k);

int main(int argc, char** argv)
{
    int n = 0;
    int k = 0;
    scanf("%d %d", &n, &k);
    printf("%d", binom(n, k));
    return 0;
}

int binom(int n, int k)
{
    if (n > k and k > 0)
    {
        return binom(n - 1, k) + binom(n - 1, k - 1);
    }
    else 
    {
        return 1;
    }
}