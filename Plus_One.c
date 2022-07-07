#include<stdio.h>
int main()
{
    int n,i,a[100],sum=0,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum*10+a[i];
    }
    if(a[0]==9)
    {
        n=n+1;
    }
    sum=sum+1;
    i=n-1;
    while(sum)
    {
        r=sum%10;
        a[i]=r;
        i=i-1;
        sum=sum/10;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}