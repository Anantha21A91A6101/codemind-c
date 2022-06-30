#include<stdio.h>
#include<math.h>
int main()
{
    int n,c=0,r,sum=0,h,p=0,k,rem;
    scanf("%d",&n);
    h=n;
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    while(sum>0)
    {
        rem=sum%10;
        c=c+1;
        k=pow(rem,c);
        p=p+k;
        sum=sum/10;
    }
    if(p==h)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
    
}