#include <stdio.h>
#include <stdlib.h>
struct sstudent
{
   char m_name[50];
   int m_roll;
   float m_mark;

};
struct sstudent readstudent()
{char a[50],b[50];
struct sstudent student;

      scanf ("%s",a);
      printf("inter the second name:");
      scanf ("%s",b);
      strcpy(student.m_name,a);
      strcat(student.m_name," ");
      strcat(student.m_name,b);
      printf("enter the roll number");
      scanf ("%d",&student.m_roll);
      printf ("enter the mark");
      scanf ("%f",& student.m_mark);
      return student;
}
void  printstudent(struct sstudent student)
{
    printf("%s \t%d\t%f \r\n",student.m_name,student.m_roll,student.m_mark);
}


void main()
{
    struct sstudent y =readstudent();
    printstudent(y);

}
