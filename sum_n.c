#include<stdio.h>
main()
{
int n,sum=0;
printf("Enter the nth Natural number : ");
scanf("%d",&n);
printf("Sum of %d natural numbers is : ",n);
for(int i=1;i<=n;i++)
{
sum+=i;
}
printf("%d\n",sum);
}
