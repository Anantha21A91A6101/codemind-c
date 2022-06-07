#include<stdio.h>
int main()
{
    int n,a[100],i,k,m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            printf("%d",i);
            m++;
        }
    }
    if(m==0)
    {
        printf("-1");
    }
    return 0;
}