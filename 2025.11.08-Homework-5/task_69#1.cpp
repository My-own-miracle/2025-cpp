#include <cstdio>
#include <cstdlib>

int main(int argc, char** argv)
{
    int n = 0;
    int k = 0;
    scanf("%d", &n);
    int* arr = (int*)calloc(n, sizeof(int));
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n / 2; ++i)
    {
        k = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = k;
    }
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}