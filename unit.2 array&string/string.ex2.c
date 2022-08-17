#include <stdio.h>
#include <stdlib.h>

int main()
{char text[100];
int i;
int length=0;
    printf("enter a string:");
    gets(text);
    for(i=0;text[i]!='\0';++i)
    {
        ++length;
    }
    printf("the length :%d",length);
    return 0;
}
