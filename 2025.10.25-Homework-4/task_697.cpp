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
    for (int i = size - 1; i >= 0; --i)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}