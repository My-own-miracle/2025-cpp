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
    int x = 0;
    scanf("%d", &x);
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == x)
        {
            count += 1;
        }
    }
    printf("%d", count);
    return 0;
}