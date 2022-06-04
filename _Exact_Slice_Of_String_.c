#include<stdio.h>
int main()
{
    char s[100],i;
    int a,b;
    scanf("%[^
]s",s);
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
        printf("%c",s[i]);
    }
    return 0;
}