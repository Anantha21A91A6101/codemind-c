#include<stdio.h>
int main()
{
    char n,a,e,i,o,u,A,E,I,O,U;
    scanf("%c",&n);
    if((n>='a'&&n<='z')||(n>='A'&&n<='Z'))
    {
        if((n=='A'||n=='E'||n=='I'||n=='O'||n=='U')||(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'))
        {
            printf("Vowel");
        }
        else
        {
            printf("Consonant");
        }
        return 0;
    }
    
    
}