#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int n,a[100],i,j,c=0,x=0,s=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    x=a[j];
                    a[j]=a[i];
                    a[i]=x;
                    c++;
                }
            }
        }
        if(c==0)
        {
            printf("%d
",0);
        }
        else
        {
            s=a[n-1]-a[0];
            printf("%d
",s);
        }
        t--;
    }
    return 0;
}