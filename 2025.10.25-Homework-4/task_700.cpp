#include <cstdio>
#define SIZE 1000

int main(int argc, char** argv)
{
    int n = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
    int arr[SIZE] = {0};
    int itm = 0;
    for (int i = 0; i < n; ++i)
    {
        arr[i] = i + 1;
    }
    for (int i = 0; i <= (b - a) / 2; ++i)
    {
        itm = arr[a - 1 + i];
        arr[a - 1 + i] = arr[b - 1 - i];
        arr[b - 1 - i] = itm;
    }
    for (int i = 0; i <= (d - c) / 2; ++i)
    {
        itm = arr[c - 1 + i];
        arr[c - 1 + i] = arr[d - 1 - i];
        arr[d - 1 - i] = itm;
    }
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}