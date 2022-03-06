#include<stdio.h>
int main()
{
    int r=0,n,sum=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if(r>sum)
        {
            sum=r;
        }
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}