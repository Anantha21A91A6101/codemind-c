#include<stdio.h>
int main()
{
    int n,a[100],i,c=0,k;
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
            c++;
        }
    }
    if(c==0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
    return 0;
}