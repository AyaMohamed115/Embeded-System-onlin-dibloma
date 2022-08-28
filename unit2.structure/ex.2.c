#include <stdio.h>
#include <stdlib.h>
struct sdistance
{
    float m_f ;//by feet
    float m_i ; //by inch
};
struct sdistance readdistance()
{struct sdistance x;
  printf("inter the distance:");
  scanf ("%f %f",&x.m_f,&x.m_i);
  return x;

}


int main()
{struct sdistance x,y,z;
       x = readdistance(x);
       y = readdistance(y);
       z.m_f = x.m_f + y.m_f;
          z.m_i = x.m_i + y.m_i;
          if (z.m_i>12.0)
          {
              z.m_i=z.m_i-12.0;
              ++z.m_f;
          }
          printf("sum of the distance :%d %f",z.m_f,z.m_i) ;
          return 0;
}
