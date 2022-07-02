#include<stdio.h>
int main()
{
    int n,a[100],i,k,sum=0,add=0,l;
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
            sum=sum+a[i];
        }
        else
        {
            printf("%d ",a[i]);
            add++;
        }
    }
    if(add==0)
    {
        printf("-1");
    }
    return 0;
}