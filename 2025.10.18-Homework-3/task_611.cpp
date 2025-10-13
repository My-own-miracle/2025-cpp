#include <cstdio>

int main(int argc, char** argv)
{
    int odd = 10000;
    int even = -10000;
    int n = 0;
    scanf("%d", &n);
    odd = (odd < n ? odd : n);
    int index = 1;
    while (getchar() != '\n' and scanf("%d", &n))
    {
        index += 1;
        if (index % 2 == 1)
        {
            odd = (odd < n ? odd : n);
        }
        else
        {
            even = (even > n ? even : n);
        }
    }
    printf("%d", odd + even);
    return 0;
}