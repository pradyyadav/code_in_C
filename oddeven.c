#include<stdio.h>
int odd_even(int x);
main()
{
int n;
printf("Enter a number of your choice : ");
scanf("%d",&n);
odd_even(n);
}
int odd_even(int x)
{
if(x%2==0)
printf("%d is an even number\n",x);
else
printf("%d is an odd number\n",x);
}
