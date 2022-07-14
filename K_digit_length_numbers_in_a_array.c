#include<stdio.h>
int main()
{
    int n,a[100],i,c=0,k,r,m,sum=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
      {
         scanf("%d",&a[i]);
      }
      for(i=0;i<n;i++)
      {
         c=0;
         k=a[i];
         if(k==0)
           {
              c=c+1;
           }
         else
          {
              while(k!=0)
              {
                 r=k%10;
                 c=c+1;
                 k=k/10;
              }
          }
          if(m==c)
          {
              sum++;
          }
       }
       printf("%d",sum);
       return 0;
}