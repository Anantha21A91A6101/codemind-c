#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,i,j,c=0,count=0;
    scanf("%d %d",&m,&n);
    if(m==1)
    m=2;
    for(i=m;i<=n;i++)
    {
        c=0;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            c++;
        }
        if(c==0)
        count++;
    }
    printf("%d",count);
    return 0;
}