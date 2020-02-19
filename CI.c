#include<stdio.h>
#include<math.h>
main(){
int p,t;
float r,temp,a;
printf("This is a Compound Interest program \nEnter the principle amount : ");
scanf("%d",&p);
printf("\nEnter the interest rate : ");
scanf("%f",&r);
printf("\nEnter the time period : ");
scanf("%d",&t);
temp=(1+(r/100));
a=p*pow(temp,t);
printf("\nYour interest to %d years is : %f",t,a-p);

}
