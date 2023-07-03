//Q.1 Write a Program to print all alphabets from a to z by skipping 3 alphabets using do while loop.

#include<stdio.h>
#include<conio.h>

void main() {

char c='A';
printf("=========================================================\n");
printf(" printing alphabets from A to Z by skipping 3 alphabets\n ");
printf("=========================================================\n");


do{
printf("%c\n",c);
c=c+4;
}while(c<='Z');
getch();
}

/*
output:
A
E
M
Q
U
Y
*/