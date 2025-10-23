#include <cstdio>
#include <cmath>
#define SIZE 1000

int main(int argc, char** argv)
{
    int n = 0;
    scanf("%d", &n);
    int arr[SIZE] = {0};
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }
    int x = 0;
    scanf("%d", &x);
    int low = 2001;
    int rez = 0;
    for (int i = 0; i < n; ++i)
    {
        if (fabs(x - arr[i]) < low)
        {
            low = fabs(x - arr[i]);
            rez = arr[i];
        }
        else if (fabs(x - arr[i]) == low)
        {
            rez = (arr[i] < rez ? arr[i] : rez);
        }
    }
    printf("%d", rez);
    return 0;
}