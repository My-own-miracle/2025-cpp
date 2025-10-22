#include <cstdio>

int main(int argc, char** argv)
{
    int size = 0;
    scanf("%d", &size);
    int arr[size] = {0};
    for (int i = 0; i < size; ++i)
    {
        scanf("%d", &arr[i]);
    }
    int high = -1001;
    int low = 1001;
    for (int i = 0; i < size; ++i)
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
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] == high)
        {
            arr[i] = low;
        }
    }
    for (int i = 0; i < size; ++i)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}