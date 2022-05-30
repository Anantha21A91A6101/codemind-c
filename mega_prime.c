#include<stdio.h>
int main()
{
    int n,i,c=0,r,m=0,s=0,t;
    scanf("%d",&n);
    t=n;
    for(i=1;i<=t;i++)
    {
        if(t%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        while(n)
        {
            int k=0;
            r=n%10;
            m++;
            for(i=1;i<=r;i++)
            {
                if(r%i==0)
                {
                    k++;
                }
            }
            if(k==2)
            {
                s++;
            }
            n=n/10;
        }
    }
    if(c==2&&s==m)
    {
        printf("Mega Prime");
    }
    else if(c>2||s!=m)
    {
        printf("Not Mega Prime");
    }
    return 0;
}