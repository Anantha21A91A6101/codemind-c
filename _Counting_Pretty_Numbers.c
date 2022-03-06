#include<stdio.h>
int main()
{
    int n,m,t,i,c=0;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d %d",&n,&m);
    c=0;
    for(i=n;i<=m;i++)
    {
        if(i%10==2||i%10==3||i%10==9)
        {
            c++;
        }
    }
    printf("%d
",c);
    t--;
    }
    return 0;
}