#include<stdio.h>
int prime(int n)
{
    int i;
    if(n<2)
    {
        return false;
    }
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n,i,j,y=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(prime(i))
        {
            for(j=1;j<i;j++)
            {
                if(prime(j) && i*j==n)
                {
                    y=1;
                    printf("%d %d",j,i);
                    break;
                }
            }
        }
        if(y==1)
        {
            break;
        }
    }
    if(y==0)
    {
        printf("-1");
    }
}