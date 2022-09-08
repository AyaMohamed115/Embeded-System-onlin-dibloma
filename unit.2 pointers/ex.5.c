#include <stdio.h>
#include <stdlib.h>
struct semployee
{
    char name[20];
    int id ;
};

int main()
{struct semployee arr[] = {{"Alex",1002},{"Tom",1003}};
 struct semployee *ptr;
 ptr=&arr;
 printf("the name of employee is:%s",ptr->name);
 printf("\r\nthe ID of employee:%d",ptr->id);
 return 0;




}
