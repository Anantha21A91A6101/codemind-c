#include<stdio.h>
int main()
{
    int n,a[100],i,c=0,k=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=1;j<a[i];j++)
        {
            if(a[i]%j==0)
            {
                c++;
            }
        }
        if(c==1)
        {
            k++;
        }
    }
    printf("%d",k);
}