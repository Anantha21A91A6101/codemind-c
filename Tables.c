#include<stdio.h>
int main()
{
    int n,s,r;
    scanf("%d %d",&n,&r);
    for(s=1;s<=r;s++)
    {
        if(s%2!=0)
        {
        printf("%d x %d = %d
",n,s,n*s);
        }
    }
    return 0;
}