#include <stdio.h>
#include <stdlib.h>

int main()
{int num , a[100],i,x,loc;
    printf("enter the number of elements :");
    scanf ("%d",&num);
    for(i=0;i<num;++i)
    {
        printf("enter the elements %d :",i);
        scanf ("%d",&a[i]);
    }
    printf("enter the number to be inserted : ");
    scanf ("%d",&x);
    printf("enter the location : ");
    scanf ("%d",&loc);

      for(i=num;i>=loc;i--)
      {
          a[i]=a[i-1];
      }
    num++;
    for(i=0;i<num;i++)
   {

    printf("the array is %d :",a[i]);
   }



    return 0;
}
