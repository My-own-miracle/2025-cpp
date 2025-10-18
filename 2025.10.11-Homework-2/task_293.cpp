#include <cstdio>
#include <cmath>

int main(int argc, char** argv)
{
    char stlet = ' ';
    char endlet = ' ';
    int stnum = 0;
    int endnum = 0;
    scanf("%c%d %c%d", &stlet, &stnum, &endlet, &endnum);
    bool flag = true;
    if (fabs(stlet - endlet) <= 1 && fabs(stnum - endnum) <= 1)
    {
        flag = false;
        printf("King\n");
    }
    if (fabs(stlet - endlet) == fabs(stnum - endnum) || stlet == endlet || stnum == endnum)
    {
        flag = false;
        printf("Queen\n");
    }
    if (stlet == endlet || stnum == endnum)
    {
        flag = false;
        printf("Rook\n");
    }
    if (fabs(stlet - endlet) == fabs(stnum - endnum))
    {
        flag = false;
        printf("Bishop\n");
    }
    if (fabs(stlet - endlet) + fabs(stnum - endnum) == 3)
    {
        flag = false;
        printf("Knight\n");
    }
    if (stnum != 1)
    {
        if (stlet == endlet && (endnum - stnum == 1 || (endnum - stnum == 2 && stnum == 2)))
        {
            flag = false;
            printf("Pawn\n");
        }
    }
    if (flag)
    {
        printf("Nobody\n");
    }
    return 0; 
}