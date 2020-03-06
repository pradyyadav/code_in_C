#include<stdio.h>
#include<math.h>
main()
{
double f;
int n;
scanf("%d",&n);

for(int i=1;i<=n;i++)
{
f+=1/(pow(2,i));
}
printf("%lf",f);
}
