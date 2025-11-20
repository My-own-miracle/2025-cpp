#include <cstdio>
#include <string.h>
#include <cstdlib>

bool Compare(char* S1, char* S2);

int main(int argc, char** argv)
{
    char* S1 = (char*)calloc(1000, sizeof(char));
    char* S2 = (char*)calloc(1000, sizeof(char));
    scanf("%s %s", S1, S2);
    Compare(S1, S2);
    free(S1);
    free(S2);
    return 0;
}

bool Compare(char* S1, char* S2)
{
    if (strcmp(S1, S2) == 0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 1;
}