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
    for (int i = 1; i < n - 1; ++i)
    {
        if (arr[i] > arr[i - 1] and arr[i] > arr[i + 1])
        {
            k += 1;
        }
    }
    printf("%d", k);
    return 0;
}