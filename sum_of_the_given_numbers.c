#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int a,b,c;
        scanf("%d %d",&a,&b);
        c=a+b;
        printf("%d
",c);
        t=t-1;
    }
    return 0;
}