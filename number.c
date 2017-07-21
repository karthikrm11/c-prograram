#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("\n ENTER THE NUMBER:");
scanf("%d",&a);
if(a<=0)
{
if(a==0)
printf("\n ENTER THE VALUE AS 0");
else
printf("\n ENTER THE NEGATIVE NUMBER");
}
else
printf("\n ENTER THE POSITIVE NUMBER");
getch();
}
