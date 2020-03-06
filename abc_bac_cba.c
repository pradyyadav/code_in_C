#include<stdio.h>
main()
{
int a,b,c;
printf("Enter the values of a,b,c : ");
scanf("%d %d %d",&a,&b,&c);
if((a*a)==(b*b)+(c*c))
printf("a,b,c : %d %d %d",a,b,c);
else if((b*b)==(a*a)+(c*c))
printf("b,a,c : %d %d %d",b,a,c);
else if((c*c)==(a*a)+(b*b))
printf("c,a,b : %d %d %d",c,a,b);
else 
printf("FAIL!!!");
}
