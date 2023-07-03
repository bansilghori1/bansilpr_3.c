//Q.2 Write a Program to count the total number of digits in a number.



#include<stdio.h>
#include<conio.h>

void main(){

int n,a=0;

printf(" ---------------------\n");
printf("   enter any number :  ");
scanf("%d",&n);
printf(" ---------------------\n");


while(n!=0){
n=n/10;
a++;
}

printf("*********************************\n");
printf(" total number of digit : %d\n",a);
printf("*********************************\n");
getch();
}

/*
Input:
Enter any number: 752

Output: 
Total number of digits: 3
*/