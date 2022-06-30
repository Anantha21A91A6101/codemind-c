#include<stdio.h>
#include<math.h>
int main()
{
    int n,k,i,c=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        k=i*i;
        if(k==n)
        {
            printf("True");
            c=c+1;
            break;
        }
    }
    if(c==0)
    {
        printf("False");
    }
    return 0;
}