#include<stdio.h>
#include<conio.h>
int LCM(int,int);
void main();
{
int num1,num2;
printf("Enter the two numbers: ");
scanf("%d%d",&num1,&num2);
printf("\nThe LCM of %d and %d= %d",num1,num2,LCM(num1,num2));
getch();
}
int LCM(int x,int y)
{
static int multiple=0;
multiple+=y;
if(multiple%x==0 && multiple%y==0)
return multiple;
else
return LCM(x,y);
}
