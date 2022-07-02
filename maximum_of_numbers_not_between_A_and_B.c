#include<stdio.h>
int main()
{
    int n,a[100],i,k,sum=0,add=0,l,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d %d",&k,&l);
    for(i=0;i<n;i++)
    {
        if(a[i]>=k&&a[i]<=l)
        {
            sum=sum+a[i];
        }
        else
        {
             if(a[i]>=add)
             {
                 add=a[i];
                 c++;
             }
        }
    }
    if(c==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",add);
    }
    return 0;
}