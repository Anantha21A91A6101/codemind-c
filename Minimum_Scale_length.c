#include<stdio.h>
int main()
{
    int n,a[100],i,j=1,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    while(j<n)
    {
        if(a[j]%max==0)
        {
            j++;
        }
        else
        {
            max=a[j]%max;
            i++;
        }
    }
    printf("%d",max);
    return 0;
}