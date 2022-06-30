#include<stdio.h>
int main()
{
    int n,k,r,sum=0,add=0,rem,m;
    scanf("%d",&n);
    k=n*n;
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    m=sum*sum;
    while(m>0)
    {
        rem=m%10;
        add=add*10+rem;
        m=m/10;
    }
    if(add==k)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}