#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int k=n-1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j || j==0 || i+j==k)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("
");
        k++;
    }
}