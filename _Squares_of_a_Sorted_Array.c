#include<stdio.h>
int main()
{
    int n,a[100],b[100],i,j=0,c=0,k,temp=0,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        k=a[i]*a[i];
        b[j]=k;
        j++;
        c++;
        k=1;
    }
    for(j=0;j<c;j++)
    {
        for(s=j+1;s<c;s++)
        {
            if(b[j]>b[s])
            {
                temp=b[j];
                b[j]=b[s];
                b[s]=temp;
            }
        }
    }
    for(j=0;j<c;j++)
    {
        printf("%d ",b[j]);
    }
    return 0;
}