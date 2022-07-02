#include<stdio.h>
int main()
{
    int n,a[100],sum=0,i,k,l,c=0;
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
            c++;
        }
        else
        {
            if(a[i]>=sum)
            {
                sum=a[i];
                c++;
            }
        }
    }
    if(sum==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",sum);
    }
    return 0;
}