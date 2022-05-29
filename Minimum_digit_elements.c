#include <stdio.h>
#include<math.h>
int main()
{int n,k,c=0,i,m;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++){
    k=(int)log10(a[i])+1;
    a[i]=k;
}m=a[0];
for(i=0;i<n;i++){
  if(a[i]<m)
  m=a[i];
}for(i=0;i<n;i++){
    if(a[i]==m)
    c++;
}printf("%d",c);
    return 0;
}