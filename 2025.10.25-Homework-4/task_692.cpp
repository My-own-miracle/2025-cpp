#include <cstdio>
#include <cmath>

int main(int argc, char** argv)
{
    int size = 0;
    scanf("%d", &size);
    int arr[size] = {0};
    for (int i = 0; i < size; ++i)
    {
        scanf("%d", &arr[i]);
    }
    int x = 0;
    scanf("%d", &x);
    int low = 2001;
    int rez = 0;
    for (int i = 0; i < size; ++i)
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