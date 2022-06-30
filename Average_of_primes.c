#include<stdio.h>
int main()
{
    int n,a[100],i,c=0,sum=0,j,m=0;
    float avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=1;j<=a[i];j++)
        {
            if(a[i]%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            sum=sum+a[i];
            m++;
        }
    }
    avg=float(sum)/float(m);
    printf("%.2f",avg);
    return 0;
}