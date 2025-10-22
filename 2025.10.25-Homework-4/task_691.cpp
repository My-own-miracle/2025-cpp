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
    int x = 0;
    scanf("%d", &x);
    int count = 0;
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] == x)
        {
            count += 1;
        }
    }
    printf("%d", count);
    return 0;
}