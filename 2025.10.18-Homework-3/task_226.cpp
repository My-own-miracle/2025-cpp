#include <cstdio>

int main(int argc, char** argv)
{
    int cur = 0;
    int prev = 0;
    int seq = 0;
    int c = 1;
    do
    {
        scanf("%d", &cur);
        if (cur == prev)
        {
            c += 1;
        }
        else
        {
            seq = (seq > c ? seq : c);
            c = 1;
        }
        prev = cur;
    } while(cur != 0);
    printf("%d", seq);
    return 0;
}