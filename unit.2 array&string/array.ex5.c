#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num , a[100],i,x;
    printf("enter the number of elements :");
    scanf ("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("enter the elements %d :",i);
        scanf ("%d",&a[i]);
    }
    printf("enter the elements to be searched ");
        scanf ("%d",&x);

       for(i=0;i<num;i++)
        {
           if(a[i]==x)
            break ;
        }
            if(i<num )
            {
                printf("the number is found at location %d:",i+1);
            }
            else
            {
                printf("\nthe number is not found");
            }


    return 0;
}
