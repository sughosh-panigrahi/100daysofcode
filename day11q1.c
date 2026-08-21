#include<stdio.h>
int main(){
int month ;
printf("the month in question is :");
scanf("%d",&month);
switch (month){
case 1:
printf("the month is January");
	break;
case 2:
printf("the month is February");
	break;
case 3:
printf("the moth is March");
	break;
case 4:
printf("the month is April");
	break;
case 5:
printf("the month is May");
	break;
case 6:
printf("the month is June");
	break;
case 7:
printf("the month is July");
	break;
case 8:
printf("the month is August");
	break;
case 9:
printf("the month is September");
	break;
case 10:
printf("the month is October");
	break;
case 11:
printf("the month is November");
	break;
case 12:
printf("the month is December");
	break;
default: 
printf("this is not a month");
}
return 0;
}
