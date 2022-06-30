#include<stdio.h>
int main()
{
    int n,m=0,s=0,c=0,i,j,r,k=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        while(n>0)
        {
            r=n%10;
            s++;
            m=0;
            for(j=1;j<=r;j++)
            {
                if(r%j==0)
                {
                    m=m+1;
                }
            }
            if(m==2)
            {
                k=k+1;
            }
            n=n/10;
        }
    }
    if(c==2 && s==k)
    {
        printf("Mega Prime");
    }
    else
    {
        printf("Not Mega Prime");
    }
    return 0;
}