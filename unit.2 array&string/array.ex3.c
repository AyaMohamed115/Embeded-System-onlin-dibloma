#include <stdio.h>
#include <stdlib.h>

int main()
{float a[5][5],trans[5][5];
int x,y,r,c;
    printf("enter the rows and columns ");
    scanf ("%d %d",&x,&y);
    for (r=0;r<x;++r)
    {
        for(c=0;c<y;++c)
        {
            printf("enter the element a %d %d :",r+1,c+1);
            scanf ("%f",&a[r][c]);
        }
    }
    printf ("the matrix is \n");
    for (r=0;r<x;++r)
    {
        for(c=0;c<y;++c)
        {
            printf("%f ",a[r][c]);
        }
        printf("\n\n");
    }
    for (r=0;r<x;r++)
    {
        for(c=0;c<y;c++)
        {
            trans[c][r]=a[r][c];
        }
    }
    printf ("the transpose matrix is \n ");
    for (r=0;r<y;r++)
    {
        for(c=0;c<x;c++)
        {
            printf("%f ",trans[r][c]);

        }
printf("\n\n");
    }
    return 0;

}
