#include <stdio.h>
int main(){
int day;
printf("enter a number from (1-7):" );
scanf("%d",&day);
switch (day){
case 1:
printf("The day is Monday");
	break;
case 2:
printf("the day is tuesday");
	break;
case 3:
printf("the day is wednesday");
	break;
case 4:
printf("the day is thursday");
	break;
case 5:
printf("the day is friday");
	break;
case 6:
printf("the day is saturday");
	break;
case 7:
printf("the day is sunday");
	break;
default:
printf("the input is invalid");
 	break;
}
return 0 ;
}

