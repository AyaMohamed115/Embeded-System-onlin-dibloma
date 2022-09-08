#include <stdio.h>
#include <stdlib.h>

int main()
{int arr[15];
 int num,i;
 int* p;
    printf("enter the number of elements to store in the array:");
    scanf ("%d",&num);
    printf("enter %d number of elements in the array\r\n",num);
    p = arr;
    for(i=0;i<num;i++)
    {
        printf("element%d:",i+1);
        scanf ("%d",p);
        p++;
    }

    printf("the elements of array in reverse order arr \r\n");
    for(i=num-1;i>=0;i--)
    {p = arr+i;
        printf("\r\n element%d:%d",i+1,*p);
        p--;


    }

    return 0;
}
