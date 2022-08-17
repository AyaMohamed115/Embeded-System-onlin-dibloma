#include <stdio.h>
#include <stdlib.h>

int main()
{int n,i;
float sum,ave,a[100];

    printf("enter the number of data (the number <100 please):");
    scanf ("%d",&n);
    for (i=0;i<n;i++)
    {
     printf("enter the %d number :",i+1);
     scanf("%f",&a[i]);
     sum+=a[i];

    }
    ave=sum/n;

    printf("the average is %f:",ave);
     scanf("%f",&ave);

    return 0;
}
