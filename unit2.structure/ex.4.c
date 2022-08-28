#include <stdio.h>
#include <stdlib.h>
struct sstudent
{
    char name[50];
    int roll;
    float mark;
};

int main()
{struct sstudent a[50];
    int i;
for(i=0;i<10;i++)
{
    printf("for roll number %d\r\n",i+1);
    printf("enter the name:");
    scanf ("%s",&a[i].name);
    printf("enter the mark:");
    scanf ("%f",&a[i].mark);
}
printf("displaying information of students :\r\n");
for(i=0;i<10;i++)
{
    printf("for roll number %d\r\n",i+1);
    printf("the name :%s \r\n",a[i].name);
    printf("mark:%f",a[i].mark);
}

    return 0;
}
