#include<stdio.h>
int main()
{
    int n,a[100],i,j,c=0,m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=i;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c=c+1;
            }
        }
        if(c==1)
        {
            if(a[i]%2==0)
            {
                m=m+a[i];
            }
        }
    }
    printf("%d",m);
    return 0;
}