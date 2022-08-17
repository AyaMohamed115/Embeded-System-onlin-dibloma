#include <stdio.h>
#include <stdlib.h>

int main()
{float a[2][2];
 float b[2][2];
 float sum[2][2];
 int r,c;
 for (int r=0;r<2;r++)
 {for(int c=0;c<2;c++)
 {
     printf ("enter the elements of matrix a %d %d:",r,c );
  scanf ("%f",&a[r][c]);
 }

 }
 for (int r=0;r<2;r++)
 {for(int c=0;c<2;c++)
 {
     printf ("enter the elements of matrix b %d %d:",r,c );
  scanf ("%f",&b[r][c]);
 }

 }
 for (int r=0;r<2;r++)
 {
     for(int c=0;c<2;c++)
     {
     sum[r][c]=a[r][c]+b[r][c];
     }

 }
 printf ("the sum matrix is \n");
 for (int r=0;r<2;r++)
 {
    for(int c=0;c<2;c++)
    {
        printf("%f \t",sum[r][c]);
    }
    printf("\r\n");
 }




    return 0;
}
