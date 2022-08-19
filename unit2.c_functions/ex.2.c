#include <stdio.h>
#include <stdlib.h>

int factorial(int num);
int main()
{int i;
    printf("enter the positive integer:");
    scanf ("%d",&i);
    printf("the factorial of %d is:",i);

    printf("%d",factorial(i));
    return 0;
}
int factorial(int num)
{int count ,factorial=1;
for(count=num;count>0;--count)
{
    factorial*=count;
}
return factorial;

}
