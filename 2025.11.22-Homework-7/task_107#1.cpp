#include <cstdio>
#include <string.h>
#include <cstdlib>

void LenWord(char* str);

int main(int argc, char** argv)
{
    char* str = (char*)calloc(1000, sizeof(char));
    scanf("%[^\n]", str);
    LenWord(str);
    free(str);
    return 0;
}

void LenWord(char* str)
{
    int k = 0;
    char* word = (char*)calloc(1000, sizeof(char));
    char* token = strtok(str, " ");
    while (token != NULL)
    {
        int len = 0;
        while (token[len] != '\0')
        {
            len += 1;
        }
        if (len > k)
        {
            k = len;
            strcpy(word, token);
        }
        token = strtok(NULL, " ");
    }
    printf("%s\n", word);
    printf("%d", k);
    free(word);
}