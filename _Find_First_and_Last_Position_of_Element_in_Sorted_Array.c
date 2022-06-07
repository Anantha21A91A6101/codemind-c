#include<stdio.h>
int main()
{
    int n,a[100],k,m=0,c=0,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            printf("%d ",i);
            m++;
            break;
        }
    }
    for(j=n-1;j>=0;j--)
    {
        if(a[j]==k)
        {
            printf("%d",j);
            c++;
            break;
        }
    }
    if(m==0&&c==0)
    {
        printf("-1 -1");
    }
    return 0;
}