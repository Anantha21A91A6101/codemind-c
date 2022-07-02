#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d",&m);
    scanf("%d",&n);
    if(m%2==0 || n%2==0)
    {
        printf("Player 1");
    }
    else
    {
        printf("Player 2");
    }
    return 0;
}