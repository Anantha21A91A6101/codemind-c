#include<stdio.h>
int main()
{
    int n,a[100],i,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        for(i=0;i<n;i++)
        {
            if(a[j]==a[i] && i!=j)
            {
                a[i]=-1;
            }
        }
    }
    for(int k=0;k<n;k++)
    {
        if(a[k]!=-1)
        {
            printf("%d ",a[k]);
        }
    }
    return 0;
}