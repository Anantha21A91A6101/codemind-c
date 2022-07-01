#include<stdio.h>
int main()
{
    int n,a[100],i,k,l,sum=0,add=0;
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
            add=add+a[i];
        }
    }
    printf("%d",add);
    return 0;
}