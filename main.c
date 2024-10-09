#include <stdio.h>

int main() 
{
    
    int bufSize = 300;
    char buffer[bufSize];

    FILE* fh = fopen("../assets/map.lua", "r");

    fread(buffer, 1, bufSize, fh);
    char* c = buffer;

    while(*c != '=')
    {
        printf("%c \n", *c);
        c++;
    }

    fclose(fh);

    // printf("Buffer: %s \n", buffer);

    return 0;
}
