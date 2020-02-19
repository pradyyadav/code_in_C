#include<stdio.h>
main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if(a>=b && a>=c)
printf("%d is the largest num.",a);
else if(b>=c)
printf("%d is the largest num.",b);
else
printf("%d is the largest num.",c);
}
