#include <stdio.h>
#include <stdlib.h>
int power(int base ,int pow);
int main()
{int x,y;
    printf("enter the base of the operation: ");
    scanf ("%d",&x);
    printf ("enter the power :");
    scanf   ("%d",&y);
    printf  ("the power number is :%d",power(x,y));
    return 0;
}
void revers_str(char x)
{int count;

}
int power(int base ,int pow)
{int i,power=1;
    for(i=1;i<=pow;i++)
    {
        power*=base;
    }
    return power;
}
