#include<stdio.h>
int main()
{
    int n,a[100],i,c=0,k=0,m,j;
    scanf("%d",&n);
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
        if(c>k)
        {
            k=c;
            m=a[i];
        }
    }
    printf("%d",m);
    return 0;
}