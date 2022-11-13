#include<stdio.h>
#include<conio.h>
void main()
{
int q,y,dis;
float x;
clrscr();
printf("Enter the quantity purchased");
scanf("%d",&q);
printf("Price ofitems");
scanf("%d",&y);
if (q+y>1000)
{
dis=10;
x=(q+y)-(y+q)*dis/100;
}
printf("%f",&x);
getch();
}