#include <stdio.h>
#include <stdlib.h>

int main()
{char text[100],temb;
int i=0;
int j=0;

    printf("enter a string:");
        gets(text);
        i=0;
        j= strlen(text)-1;
        while(i<j)
        {
            temb=text[i];
            text[i]=text[j];
            text[j]=temb;
            i++;
            j--;
        }
        printf("the reversed string is:%s",text);
    return 0;
}
