#include<stdio.h>
int main()
{
    int m,n,k,i,sum=0,r;
    scanf("%d",&m);
    scanf("%d",&n);
    for(i=m;i<=n;i++)
    {
        sum=0;
        k=i;
        while(k!=0)
        {
            r=k%10;
            sum=sum*10+r;
            k=k/10;
        }
        if(sum==i)
        {
            printf("%d ",sum);
        }
    }
    return 0;
}