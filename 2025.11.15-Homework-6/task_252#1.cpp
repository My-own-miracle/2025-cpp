#include <cstdio>
#include <cmath>

bool prime(int n);

int main(int argc, char** argv)
{
    int n = 0;
    scanf("%d", &n);
    if (prime(n))
    {
        printf("prime");
    }
    else
    {
        printf("composite");
    }
    return 0;
}

bool prime(int n)
{
    for (int i = 2; i < sqrt(n) + 1; ++i)
    {
        if (n % i == 0 and i != n)
        {
            return false;
        }
    }
    return true;
}