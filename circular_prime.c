#include<stdio.h>
int main()
{
    int n,i,c=0,m=0,r,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    while(n>0)
      {
         r=n%10;
         sum=sum*10+r;
         n=n/10;
      }
    for(i=1;i<=sum;i++)
    {
       if(sum%i==0)
       {
           m=m+1;
       }
    }
    if(m==2 &&c==2)
    {
        printf("circular prime");
    }
    else if(c==2 && m!=2)
    {
        printf("prime but not a circular prime");
    }
    else if(c!=2)
    {
        printf("not prime");
    }
    return 0;
}