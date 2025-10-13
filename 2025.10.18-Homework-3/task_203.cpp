#include <cstdio>

int main(int argc, char** argv)
{
    int n = 0;
    int seq = 0;
    int c = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        int temp = 0;
        scanf("%d", &temp);
        if (temp > 0)
        {
            c += 1;
        }
        else
        {
            seq = (seq > c ? seq : c);
            c = 0;
        }
    }
    seq = (seq > c ? seq : c);
    printf("%d", seq);
    return 0;
}