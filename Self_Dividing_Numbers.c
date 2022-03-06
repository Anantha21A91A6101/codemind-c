#include<stdio.h>
int main()
{
    int a,b,i,k,r;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        k=i;
        while(k>0)
        {
            r=k%10;
            if(r==0||i%r!=0)
            {
                break;
            }
            k=k/10;
        }
    if(k==0)
    {
        printf("%d ",i);
    }
    }
    return 0;
}