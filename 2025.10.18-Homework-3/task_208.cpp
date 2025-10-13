#include <cstdio>

int main(int argc, char** argv)
{
    int n = 0;
    scanf("%d", &n);
    if (n == 0)
    {
        printf("0");
    }
    else if (n == 1)
    {
        printf("1");
    }
    else
    {
        int num0 = 0;
        int num1 = 1;
        while (n > 1)
        {
            num1 += num0;
            num0 = num1 - num0;
            n -= 1;
        }
        printf("%d", num1);
    }
    return 0;
}