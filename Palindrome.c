#include<stdio.h>
int main()
{
    int n,sum=0,r,k;
    scanf("%d",&n);
    k=n;
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(k==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}