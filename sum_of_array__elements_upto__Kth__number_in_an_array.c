#include<stdio.h>
int main()
{
    int n,a[100],c=0,sum=0,i,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        if(a[i]==k)
        {
            break;
        }
    }
    printf("%d",sum);
    return 0;
}
        