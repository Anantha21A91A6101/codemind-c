#include<stdio.h>
int main()
{
    int n,i=0,c=0,r,j,k=0;
    scanf("%d",&n);
    int a[100];
    while(n>0)
    {
        r=n%10;
        a[i]=r;
        i=i+1;
        k++;
        n=n/10;
    }
    for(i=0;i<=k;i++)
    {
        for(j=0;j<=k;j++)
        {
           if(i!=j)
           {
               if(a[i]==a[j])
               {
                   c++;
               }
           }
        }
    }
    if(c==0)
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }
    return 0;
}