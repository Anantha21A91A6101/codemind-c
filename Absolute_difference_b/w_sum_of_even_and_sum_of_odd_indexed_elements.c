#include<stdio.h>
int main()
{
    int n,a[100],i,sum=0,p=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sum=sum+a[i];
        }
        else
        {
            p=p+a[i];
        }
    }
    if(sum>p)
    {
        k=sum-p;
        printf("%d",k);
    }
    else
    {
        k=p-sum;
        printf("%d",k);
    }
    return 0;
}