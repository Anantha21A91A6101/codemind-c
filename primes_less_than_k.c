#include<stdio.h>
int main()
{
    int n,a[100],i,c=0,m=0,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=1;j<=a[i];j++)
        {
            if(a[i]%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            if(a[i]<=k)
            {
                m++;
            }
        }
    }
    printf("%d",m);
    return 0;
}