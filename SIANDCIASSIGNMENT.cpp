//SAID SHAMSA ALI
//REG N.O PA107/G/22141/24


#include<stdio.h>
int main()
{
int p,r,t,n;
float si,ci;


printf("enter principle,rate and time=\n",p,r,t);
scanf("%d,%d,%d",&p,&r,&t);

si=(p*r*t)/100;
printf("simple interest is= %.1f\n",si);

printf("enter the number of time interest compounded=\n",p,r,t,n);
scanf("%d,%d,%d",&p,&r,&t);

ci=p*(1+r/n)^n*t;
printf("compound interest is=%.1f\n,",ci);




	
	return 0;
}