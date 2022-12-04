#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int n,m,i,j,sum=0,c=0,k=0,l=0,h=-1;
        scanf("%d %d",&n,&m);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            sum=0;
            for(j=i;j<n;j++)
            {
                sum=sum+a[j];
                if(sum==m)
                {
                    k=i+1;
                    l=j+1;
                    c=1;
                    break;
                }
            }
            if(c==1)
            {
                break;
            }
        }
        if(c==0)
        {
            printf("-1");
        }
        else
        {
            printf("%d %d",k,l);
        }
        printf("
");
        t=t-1;
    }
}