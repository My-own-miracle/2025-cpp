#include <cstdio>

bool Election(bool x, bool y, bool z);

int main(int argc, char** argv)
{
    int x = 0;
    int y = 0;
    int z = 0;
    scanf("%d %d %d", &x, &y, &z);
    printf("%d", Election(x, y, z));
    return 0;
}

bool Election(bool x, bool y, bool z)
{
    if (x + y + z >= 2)
    {
        return true;
    }
    return false;
}