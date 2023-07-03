//Q.3 Write a Program to find the sum of a first and the last digit of a number.

#include<stdio.h>
#include<conio.h>

void main () {
int n,m,p,s;


printf(" ---------------------\n");
printf("   enter any value :  ");
scanf("%d",&n);
printf(" ---------------------\n");


m=n%10;

do{
p=n/10;
n=p;
}while(n>10);


s=p+m;
printf("\n\n----------------------------------------------\n");
printf(" The sum of first and the last digits :  %d\n",s);
printf("----------------------------------------------\n");
getch();
}

/*
Input:
Enter any number: 384

Output: 
The sum of the first and the last digit: 7

*/