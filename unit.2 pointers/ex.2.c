#include <stdio.h>
#include <stdlib.h>

int main()
{char alph[27];
char* p ;
int i;
    printf("pointer:print all the alphabets:\n");
    printf("-----------------------------------\n");
    p = alph;
      for(int i=0;i<26;i++)
      {
          *p=i+'A';

          p++;
      }
      p=alph;
      printf("the alphabets are:\r\n");
      for(i=0;i<26;i++)
      {
          printf("%c\t",*p);
          p++;

      }



    return 0;
}
