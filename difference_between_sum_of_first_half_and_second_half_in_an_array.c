#include<stdio.h>
int main()
{
    int n,a[100],i,k,sum=0,add=0,p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    k=n/2;
    for(i=0;i<k;i++)
    {
        sum=sum+a[i];
    }
    for(i=k;i<n;i++)
    {
        add=add+a[i];
    }
    if(sum>add)
    {
        p=sum-add;
        printf("%d",p);
    }
    else
    {
        p=add-sum;
        printf("%d",p);
    }
    return 0;
}