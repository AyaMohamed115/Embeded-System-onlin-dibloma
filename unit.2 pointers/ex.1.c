#include <stdio.h>
#include <stdlib.h>

int main()
{int m = 29;
int* ab;
ab = &m ;
    printf("address of m :0x%x \r\n",&m);
    printf("value of m :%d\r\n",m);
    printf("address of pointer ab:0x%x \r\n",ab);
    printf("content of pointer is:%d\r\n",*ab);
    m = 34;
    printf("address of pointer ab:0x%x \r\n",ab);
    printf("content of pointer is:%d\r\n",*ab);
   *ab = 7;
   printf("address of m :0x%x \r\n",&m);
    printf("value of m :%d\r\n",m);
    return 0;
}
