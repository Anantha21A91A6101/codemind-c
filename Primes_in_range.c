#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,i,j,c=0,s=0;
    scanf("%d",&n);
    scanf("%d",&m);
    if(n==1)
    {
        n=2;
    }
    for(i=n;i<=m;i++)
    {
        c=0;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                c=c+1;
            }
        }
        if(c==0)
        {
            s=s+1;
        }
    }
    printf("%d",s);
    return 0;
}