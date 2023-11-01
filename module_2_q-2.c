//Write a program to find the simple Interest & Compound Interest.
//prt/100
#include<stdio.h>
main()
{
	float p,r=7,t,si;
	printf("enter the value of P and T : ");
	scanf("%f%f",&p,&t);
	
	si=(p*r*t)/100;
	printf("%f",&si);
}
