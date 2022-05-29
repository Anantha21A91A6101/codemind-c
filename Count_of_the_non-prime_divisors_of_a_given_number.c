#include<stdio.h>
int main()
{
    int n,i,j,c=0,m=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    c=c+1;
                }
            }
            if(c!=2)
            {
                m=m+1;
            }
        }
    }
    printf("%d",m);
    return 0;
}