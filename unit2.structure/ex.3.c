#include <stdio.h>
#include <stdlib.h>
struct scomplix
{
   float m_real;
    float m_imagin;
};
struct scomplix addcomplix(struct scomplix n1,struct scomplix n2)
{struct scomplix sum;
        sum.m_real = n1.m_real + n2.m_real;
        sum.m_imagin = n1.m_imagin + n2.m_imagin;
        return sum;
}
void printcomplix(struct scomplix x)
{
    printf("the sum :%f+%f i",x.m_real,x.m_imagin);
}
int main()
{struct scomplix num1,num2,somtion;
    printf("enter the real and imaginary of 1_st number:");
    scanf ("%f %f",&num1.m_real,&num1.m_imagin);
    printf("enter the real and imaginary of 2_st number:");
    scanf (" %f %f",&num2.m_real,&num2.m_imagin);
    somtion = addcomplix(num1,num2);
    printcomplix(somtion);

}
