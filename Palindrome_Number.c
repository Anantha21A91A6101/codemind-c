#include<stdio.h>
int main()
{
    int n,i,r,t,sum=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        t=x[i];
        sum=0;
        while(t!=0)
        {
            r=t%10;
            sum=sum*10+r;
            t=t/10;
        }
        if(x[i]==sum)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
    return 0;
}