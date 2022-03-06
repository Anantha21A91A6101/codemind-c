#include<stdio.h>
int main()
{
    int n,r,sum=0,i,k,fact;
    scanf("%d",&n);
    k=n;
    while(k>0)
    {
        r=k%10;
        fact=1;
        for(i=1;i<=r;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        k=k/10;
    }
    if(n==sum)
    {
        printf("The number %d is a strong number",n);
    }
    else
    {
        printf("The number %d is not a strong number",n);
    }
    return 0;
}