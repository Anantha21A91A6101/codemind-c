#include<stdio.h>
int main()
{
    int n,a[100],i,r,c=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        k=a[i];
        if(k==0)
        {
            c=c+1;
        }
        else
        {
            while(k!=0)
            {
                r=k%10;
                c++;
                k=k/10;
            }
        }
        printf("%d ",c);
    }
    return 0;
}
