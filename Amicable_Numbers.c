#include<stdio.h>
int main()
{
    int n,m,i,sum=0,add=0;
    scanf("%d",&m);
    scanf("%d",&n);
    for(i=1;i<m;i++)
    {
        if(m%i==0)
        {
            sum=sum+i;
        }
    }
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            add=add+i;
        }
    }
    if(m==add&&n==sum)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
    return 0;
}