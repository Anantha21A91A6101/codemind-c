#include<stdio.h>
int main()
{
    int n,r=1,sum=0;
    scanf("%d",&n);
    while(n>r)
    {
        if(n%r==0)
        {
            sum=sum+r;
        }
        r++;
    }
    if(n==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}