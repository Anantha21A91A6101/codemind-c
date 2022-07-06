#include<stdio.h>
int main()
{
    int n,i=0,r,j;
    scanf("%d",&n);
    int a[100];
    while(n>0)
    {
        r=n%10;
        a[i]=r;
        i=i+1;
        n=n/10;
    }
    for(j=i-1;j>=0;j--)
    {
        if(a[j]==6)
        {
            a[j]=9;
            break;
        }
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
    return 0;
}