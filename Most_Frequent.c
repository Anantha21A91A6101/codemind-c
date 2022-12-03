#include<stdio.h>
int main()
{
    int n,i,j,c=0,k=0,m=0;
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
            if(a[i]==a[j])
            {
                c=c+1;
            }
        }
        if(c>m)
        {
            m=c;
            k=a[i];
        }
        else if(c==m)
        {
            if(k>a[i])
            {
                k=a[i];
            }
        }
    }
    printf("%d",k);
}