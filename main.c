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

            char keyBuffer[100];
            int keyCounter = 0;

            char valBuffer[100];
            int bufCounter = 0;

            char* current = c;

            printf("Pre Current: %c \n", *current);

            while(!isalpha(*current))
            {
                current++;
            }

            while(isalpha(*current))
            {
                keyBuffer[keyCounter] = *current;
                keyCounter++;
                current++;
            }
            keyCounter = 0;

            printf("Key: %s \n", keyBuffer);

            printf("Post Current: %c \n", *current);
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
