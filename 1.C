#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
float si;
clrscr();
printf("Enter the value of a");
scanf("%d,a");
printf("Enter the value of b");
scanf("%d,b");
printf("Enter the value of c");
scanf("%d,c");
si=(a*b*c)/100;
printf("%d &%f",si);
getch();
}