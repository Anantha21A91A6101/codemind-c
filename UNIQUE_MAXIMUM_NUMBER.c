#include<stdio.h>
int main()
{
    int n,a[100],i,j,c=0,k=0,m=0;
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
                c++;
            }
        }
        if(c==1)
        {
            if(a[i]>k)
            {
                k=a[i];
                m=m+1;
            }
        }
    }
    if(m>0)
    {
       printf("%d",k);
    }
    else
    {
        printf("-1");
    }
    return 0;
}