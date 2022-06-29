#include<stdio.h>
int main()
{
    int n,sum=0,k,r;
    scanf("%d",&n);
    k=n;
    while(k!=0)
    {
        r=k%10;
        sum=sum*10+r;
        k=k/10;
    }
    printf("%d",sum);
    return 0;
}