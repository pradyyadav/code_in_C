#include<stdio.h>
 main(){
float r,a;
int p,t;
printf("Enter the principle amount : ");
scanf("%d", &p);
printf("\nEnter the interest rate : ");
scanf("%f",&r);
printf("\nEnter the time period(in yrs) : ");
scanf("%d",&t);
a=(p*r*t)/100;
printf("The amount after %d years is : %f",t,a);



}
