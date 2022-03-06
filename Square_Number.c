#include<stdio.h>
#include<math.h>
int main()
{
    int n,s,p;
    scanf("%d",&n);
    s=sqrt(n);
    p=s*s;
    if(p==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}
