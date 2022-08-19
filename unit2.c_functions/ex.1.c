#include <stdio.h>
#include <stdlib.h>
int fun_prim(int n);
int main()
{int num1,num2,x,flag;
    printf("inter tow numbers:");
    scanf ("%d %d",&num1,&num2);
    printf("the prim numbers between %d %d is:",num1,num2);
    for(x=num1+1;x<num2;++x)
    {
        flag=fun_prim(x);
        if(flag==0)
        printf("%d \t",x);

    }
    return 0;
}
int fun_prim(int n)
{
    int i,flag=0;
    for(i=2;i<=n/2;++i)
    {
        if(n%i==0)
        {
            flag=1;
            break ;
        }
    }
    return flag;
}
