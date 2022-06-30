#include<stdio.h>
int main()
{
    int n,m,i,j,c=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=n;i<m;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c=c+1;
            }
        }
        if(c==2)
        {
            printf("%d
",i);
        }
    }
    return 0;
}