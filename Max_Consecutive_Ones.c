#include<stdio.h>
int main()
{
    int n,i,j=0,m=0,c=0,s=0;
    scanf("%d",&n);
    int a[n],d[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            c=c+1;
        }
        else
        {
            c=0;
        }
        d[j]=c;
        j++;
        m++;
    }
    for(j=0;j<m;j++)
    {
        if(d[j]>=s)
        {
            s=d[j];
        }
    }
    printf("%d",s);
}