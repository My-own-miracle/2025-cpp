#include <cstdio>

int main(int argc, char** argv)
{
    int cur = 0;
    int max1 = 0;
    int max2 = 0;
    do
    {
        scanf("%d", &cur);
        if (cur > max1)
        {
            if (cur > max2)
            {
                max1 = max2;
                max2 = cur;
            }
            else
            {
                max1 = cur;
            }
        }
    } while(cur != 0);
    printf("%d", max1);
    return 0;
}