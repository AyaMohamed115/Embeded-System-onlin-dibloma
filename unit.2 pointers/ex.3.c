#include <stdio.h>
#include <stdlib.h>

int main()
{char str[50];
 char* p;
 int i;
     printf("enter the string:");
    scanf ("%s",&str);
    p = str;
    printf("the input string is:");
    for(i=0;i<strlen(str);i++)
    {
        printf("%c",*p);
        p++;
    }
    printf("\r\nreverse of the string is:");
    for(i=strlen(str)-1;i>0;i--)
    {
        p = str+i;
        printf("%c",*p);
        p--;
    }





    return 0;
}
