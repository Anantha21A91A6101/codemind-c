#include<stdio.h>
int prime(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a,b,i,y=0;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=1;i<=10000;i++)
    {
      if(prime(i+a+b)==1)
      {
         printf("%d",i);
         y=1;
         break;
      }
      if(y==1)
      {
          break;
      }
    }
}