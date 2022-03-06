#include<stdio.h>
#include<math.h>
int main()
{
    int n,k,sum=0,c=0,r;
    scanf("%d",&n);
    k=n;
    while(k>0)
    {
        k=k/10;
        c++;
    }
    k=n;
    while(k>0)
    {
        r=k%10;
        sum=sum+pow(r,c);
        k=k/10;
        c--;
    }
    if(sum==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}