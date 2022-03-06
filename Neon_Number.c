#include<stdio.h>
int main()
{
    int n,r,p,sum=0;
    scanf("%d",&n);
    p=n*n;
    while(p>0)
    {
        r=p%10;
        sum=sum+r;
        p=p/10;
    }
    if(n==sum)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    return 0;
}