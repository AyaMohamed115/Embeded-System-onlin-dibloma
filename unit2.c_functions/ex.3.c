#include <stdio.h>
#include <stdlib.h>
void reverse();
int main()
{
    printf("enter the sentence:");

    reverse();
    return 0;
}
void reverse()
{char x;
    scanf("%c",&x);
    if(x!='\n'){

    reverse();
    printf("%c",x);}

}
