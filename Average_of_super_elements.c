#include<stdio.h>
int main()
{
    int n,a[100],c=0,sum=0,m=0,i,j;
    float avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j]&&a[i]!=-1)
            {
                c=c+1;
            }
        }
        if(c==a[i])
        {
            sum=sum+a[i];
            m++;
            a[i]=-1;
        }
    }
    avg=float(sum)/float(m);
    if(m==0)
    {
        printf("-1");
    }
    else
    {
       printf("%.2f",avg);
       return 0;
    }
}