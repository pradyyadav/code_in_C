#include<stdio.h>
#include<math.h>
main()
{double f,p;
int n;
p=(3.14*3.14)/6;
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
f+=1/(pow(i,2));
}
printf("%lf\n",f);
if(f<p)
printf("%lf is less than %lf",f,p);
else
printf("%lf is greater than %lf",f,p);
}
