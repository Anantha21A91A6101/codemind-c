#include<stdio.h>
int main()
{
    int n,a[100],i,r,c=0,sum=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        k=a[i];
        sum=0;
        while(k>0)
        {
            r=k%10;
            sum=sum*10+r;
            k=k/10;
        }
        printf("%d ",sum);
    }
    return 0;
}