#include<stdio.h>
#include<conio.h>
void main()
{
int c,d,x;
clrscr();
printf("Enter the value of c");
scanf("%d",&c);
printf("Enter the value of d");
scanf("%d",&d);
x=c;
c=d;
d=x;
printf("%d%d",c,d);
getch();
}