#include<stdio.h>
int main()
{
    int n,i,j,c=0,m=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j] && a[i]!=-1)
            {
                c=c+1;
            }
        }
        if(c%2==0)
        {
            m=m+1;
        }
        a[i]=-1;
    }
    printf("%d",m);
    return 0;
}