#include<stdio.h>
int main()
{
    int n,a[100],i,c=0,m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            if(a[i]%2==0)
            {
                c++;
            }
        }
    }
    for(i=0;i<n;i++)
    {
     if(a[i]%2==0)
     {
         m++;
     }
    }
    if(c==m)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}