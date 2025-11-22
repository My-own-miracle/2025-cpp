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
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] > 0)
        {
            k += 1;
        }
    }
    printf("%d", k);
    free(arr);
    return 0;
}