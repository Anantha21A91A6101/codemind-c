#include<stdio.h>
int main()
{
    char n[999];
    fgets(n,999,stdin);
    printf("%s",n);
    return 0;
}