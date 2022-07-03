#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int n,a[100],i,c=0,m=0,k;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            if(a[i]%2!=0)
            {
                c++;
            }
            else
            {
                m++;
            }
        }
        k=c/2;
        printf("%d
",k);
        t--;
    }
    return 0;
}