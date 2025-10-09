#include <cstdio>
#include <string>
#include <cmath>

int main(int argc, char** argv)
{
    char start [4];
    char end [4];
    scanf("%s %s", &start, &end);
    bool flag = true;
    if (abs(start[0] - end[0]) <= 1 and abs(start[1] - end[1]) <= 1)
    {
        flag = false;
        printf("King\n");
    }
    if (abs(start[0] - end[0]) == abs(start[1] - end[1]) or
            start[0] == end[0] or start[1] == end[1])
    {
        flag = false;
        printf("Queen\n");
    }
    if (start[0] == end[0] or start[1] == end[1])
    {
        flag = false;
        printf("Rook\n");
    }
    if (abs(start[0] - end[0]) == abs(start[1] - end[1]))
    {
        flag = false;
        printf("Bishop\n");
    }
    if (abs(start[0] - end[0]) + abs(start[1] - end[1]) == 3)
    {
        flag = false;
        printf("Knight\n");
    }
    if (start[1] != char('1'))
    {
        if (start[0] == end[0] and (end[1] - start[1] == 1 or 
            (end[1] - start[1] == 2 and start[1] == char('2'))))
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