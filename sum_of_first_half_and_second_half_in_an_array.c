#include<stdio.h>
int main()
{
    int n,a[100],i,add=0,sum=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    k=n/2;
    for(i=0;i<k;i++)
    {
        add=add+a[i];
    }
    for(i=k;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%d
",add);
    printf("%d",sum);
    return 0;
}