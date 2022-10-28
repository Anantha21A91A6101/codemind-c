#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
       long int n,m,i,y=-1;
       scanf("%ld",&n);
       scanf("%ld",&m);
       for(i=0;i<m;i++)
       {
          if(i*i%m==n)
          {
             y=i;
             break;
          }
       }
       printf("%ld",y);
       printf("
");
       t=t-1;
    }
    return 0;
}