#include<stdio.h>
int main()
{
    int n,a[100],i,sum=0;
    float avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    avg=float(sum)/float(n);
    printf("%.2f",avg);
    return 0;
}