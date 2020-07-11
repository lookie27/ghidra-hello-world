#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void mysteryFunction()
{
    char* p = 0;
    *p = 5;
}

//prints string
void printString(char* strValue) 
{
    if (strlen(strValue) > 0) 
    {
        printf("%s", strValue);
    }
    else 
    {
        strcpy(strValue, "Good night world!\n");
        strValue[0] = 'F';
        printf("%s", strValue);
    }
}

int main(int argc, char *argv[]) 
{
    mysteryFunction();
    char* helloWorldString = malloc(12);
    strcpy(helloWorldString, "HelloWorld!\n");
    printString(helloWorldString);
    free(helloWorldString);

}

