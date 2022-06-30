#include<stdio.h>
int main()
{
    int n,a[100],i,c,m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    c=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i+1]<c)
        {
            c=a[i];
            m++;
        }
    }
    if(m==n)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}