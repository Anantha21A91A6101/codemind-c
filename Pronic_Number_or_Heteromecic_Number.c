#include<stdio.h>
int main()
{
    int n,m,k,c=0,i;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        k=i+1;
        m=i*k;
        if(m==n)
        {
            printf("YES");
            c++;
            break;
        }
    }
    if(c==0)
    {
        printf("NO");
    }
    return 0;
}