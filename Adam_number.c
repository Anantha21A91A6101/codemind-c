#include<stdio.h>
int main()
{
    int n,r,sum=0,p,j,i=0,x;
    scanf("%d",&n);
    p=n*n;
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    x=sum*sum;
    while(x>0)
    {
        j=x%10;
        i=i*10+j;
        x=x/10;
    }
    if(p==i)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}