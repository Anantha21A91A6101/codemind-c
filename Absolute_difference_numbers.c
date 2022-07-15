#include<stdio.h>
#include<math.h>
int main()
{
    int n,k,c=0,add=0,sum=0,p=0,w=0,r,h,s=0,m=0;
    scanf("%d %d",&n,&k);
    h=n;
    while(n>0)
    {
        r=n%10;
        c++;
        sum=sum*10+r;
        if(c==k)
        {
            break;
        }
        n=n/10;
    }
    while(sum>0)
    {
        r=sum%10;
        s=s*10+r;
        sum=sum/10;
    }
    while(h>0)
    {
        r=h%10;
        add=add*10+r;
        h=h/10;
    }
    while(add>0)
    {
        r=add%10;
        m++;
        w=w*10+r;
        if(m==k)
        {
            break;
        }
        add=add/10;
    }
    p=abs(s-w);
    printf("%d",p);
    return 0;
}