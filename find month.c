#include<stdio.h>
#include<string.h>
void main()
{
int date,month,year;
clrscr();
printf("enter the input\n");
scanf("%d/%d/%d",&date,&month,&year);
switch(month)
{
case 1:
printf("january");
break;
case 2:
printf("Febuary");
break;
case 3:
printf("March");
break;
case 4:
printf("april");
break;
case 5:
printf("may");
break;
case 6:
printf("june");
break;
case 7:
printf("july");
break;
case 8:
printf("August");
break;
case 9:
printf("September");
break;
case 10:
printf("October");
break;
case 11:
printf("November");
break;
case 12:
printf("December");
break;
default:
printf("invalid data");
break;
}
getch();
}
