#include<stdio.h>
int main()
{
    int n,m,i,j,sum=0;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int k=n-1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==0 || j==0 || i+j==k || i==(n-1))
            {
                sum=sum+a[i][j];
            }
        }
        k=k+1;
    }
    printf("%d",sum);
    return 0;
}