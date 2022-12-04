#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int n,i,j,k,c=0;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i!=j)
                {
                    for(k=0;k<n;k++)
                    {
                        if(a[i]+a[j]==a[k])
                        {
                            c=c+1;
                        }
                    }
                }
            }
        }
        if(c==0)
        {
            printf("-1");
        }
        else
        {
            printf("%d",c/2);
        }
        printf("
");
        t=t-1;
    }
}