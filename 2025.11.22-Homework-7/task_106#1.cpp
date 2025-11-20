#include <cstdio>
#include <string.h>
#include <cstdlib>

int CountWords(char* str);

int main(int argc, char** argv)
{
    char* str = (char*)calloc(1000, sizeof(char));
    scanf("%[^\n]", str);
    printf("%d", CountWords(str));
    free(str);
    return 0;
}

int CountWords(char* str)
{
    int k = 0;
    char* token = strtok(str, " ");
    while (token != NULL)
    {
        k += 1;
        token = strtok(NULL, " ");
    }
    return k;
}