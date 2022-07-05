#include<stdio.h>
int main()
{
    int n,a[100],i,sum=0,c=0;
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
    avg=(sum)/(n);
    for(i=0;i<n;i++)
    {
        if(a[i]==avg)
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
    return 0;
}