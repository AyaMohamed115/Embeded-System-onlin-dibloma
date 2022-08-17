#include <stdio.h>
#include <stdlib.h>

int main()
{char text[100],x;
int i=0;
int freq=0;
    printf("enter a string :");
    gets(text);
    printf (" you entered: %s",text);
    printf("\r\nenter a character to find frequency :%c",x);
    scanf("%c",&x);
    for(;text[i]!='\0';++i)
    {
      if(text[i]==x)
        ++freq;
    }

   printf("\r\nfrequency of %c is %d",x,freq);
    return 0;
}
