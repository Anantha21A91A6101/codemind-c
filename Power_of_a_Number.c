#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,n,z;
    scanf("%d %d %d",&a,&b,&c);
    n=pow(a,b);
    z=n%c;
    printf("%d",z);
    return 0;
}