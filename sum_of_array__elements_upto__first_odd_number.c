#include<stdio.h>
int main()
{
    int n,a[100],c=0,sum=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            break;
        }
        else
        {
            sum=sum+a[i];
        }
    }
    printf("%d",sum);
    return 0;
}
        