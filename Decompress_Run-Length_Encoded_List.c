#include<stdio.h>
int main()
{
    int n,i,c=1,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            c=1;
            k=a[i];
            if((i+1)%2!=0)
            {
                while(c<=k)
                {
                    printf("%d ",a[i+1]);
                    c=c+1;
                }
            }
        }
    }
}