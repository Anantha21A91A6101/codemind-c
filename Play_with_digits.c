#include<stdio.h>
int main()
{
    int n,a[100],i,r,sum=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        k=a[i];
        while(k>0)
        {
            r=k%10;
            sum=sum+r;
            k=k/10;
        }
    }
    printf("%d",sum);
    return 0;
}