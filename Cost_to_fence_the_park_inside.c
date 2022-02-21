#include<stdio.h>
int main()
{
    int i,b,w,c,area;
    scanf("%d %d %d %d",&i,&b,&w,&c);
    if((i<=2*w)||(b<=2*w))
    {
        printf("Impossible");
    }
    else
    {
        area=(i*b-(i-2*w)*(b-2*w));
        printf("%d",(area*c));
    }
    return 0;
}