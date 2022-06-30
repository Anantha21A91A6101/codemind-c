#include<stdio.h>
int main()
{
    int n,sum=0,i,k;
    scanf("%d",&n);
    k=n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum>=k)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}