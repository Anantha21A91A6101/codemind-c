#include<stdio.h>
int main()
{
    int n,sum=0,i,k,l,a[100],c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d %d",&k,&l);
    for(i=0;i<n;i++)
    {
        if(a[i]>=k&&a[i]<=l)
       {
           if(a[i]>=sum)
           {
               sum=a[i];
               c++;
           }
       }
    }
    if(c==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",sum);
    }
    return 0;
}