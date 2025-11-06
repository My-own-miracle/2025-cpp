#include <cstdio>
#include <cstdlib>

int main(int argc, char** argv)
{
    int n = 0;
    bool f = false;
    scanf("%d", &n);
    int* arr = (int*)calloc(n, sizeof(int));
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i < n; ++i)
    {
        if (arr[i] * arr[i - 1] > 0)
        {
            f = true;
        }
    }
    if (f)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}