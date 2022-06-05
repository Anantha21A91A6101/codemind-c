#include<stdio.h>
int main()
{
    int s,t,b,c,k;
    scanf("%d %d %d",&t,&s,&b);
    k=2*s*t*b*512;
    c=k/1024;
    printf("%dKB",c);
    return 0;
    
}