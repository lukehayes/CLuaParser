#include <stdio.h>
#include <ctype.h>

typedef struct Node
{
    const char* key;
    void* value;
    struct Node *next;
} Node;

int main()
{

    int bufSize = 300;
    char buffer[bufSize];
    char parseBuffer[bufSize];

    FILE* fh = fopen("../assets/map.lua", "r");

    fread(buffer, 1, bufSize, fh);
    char* c = buffer;
    int counter = 0;


    while(*c != EOF)
    {
        if(*c == '{')
        {
            char* current = c;
            printf("Start Parse \n");
            printf("Next Char: %c \n", *(c + 2));
        }


        parseBuffer[counter] = *c;
        c++;
        counter += 1;
    }
    // printf("Parse Buffer: %s \n", parseBuffer);

    fclose(fh);

    // printf("Buffer: %s \n", buffer);

    return 0;
}
