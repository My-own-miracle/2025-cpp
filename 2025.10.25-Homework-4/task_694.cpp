#include <cstdio>
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
    int high = -1001;
    int low = 1001;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] > high)
        {
            high = arr[i];
        }
        if (arr[i] < low)
        {
            low = arr[i];
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == high)
        {
            arr[i] = low;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}