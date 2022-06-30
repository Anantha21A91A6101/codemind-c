#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[100],i,c=0,sum=0;
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
    avg=floor(sum/n);
    for(i=0;i<n;i++)
    {
        if(avg<=a[i])
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}