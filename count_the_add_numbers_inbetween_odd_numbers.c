#include<stdio.h>
int main()
{
    int n,a[100],i,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i+=2)
    {
        if(a[i]%2!=0)
        {
            c=c+1;
        }
    }
    printf("%d",c);
    return 0;
}