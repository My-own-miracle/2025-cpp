#include <cstdio>

bool IsDigit(unsigned char c);

int main(int argc, char** argv)
{
    char c = ' ';
    scanf("%c", &c);
    IsDigit(c);
    return 0;
}

bool IsDigit(unsigned char c)
{
    if ('0' <= c && c <= '9')
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 1;
}