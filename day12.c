#include<stdio.h>
int main(){
int bill =0;
int unit;
printf("the electricity consumed is :%d\n",unit);
scanf("%d",&unit);
if(unit<=100){
bill=unit*5;
printf("the electricity consumed is :%d\n",bill);
}
else if(unit<=200){
bill=(100*5)+ ((unit-100) *7);
printf("the electricity bill is :%d\n",bill);
}
else if(unit <=300){
bill=(100*5) +( 100*7)+((unit-200)*10);
printf("the electricity bill is:%d\n",bill);
}
else if(unit<=400){
bill =( 100*5)+ (100*7)+(100*10) + ((unit-300)*12);
printf("the elctricity bill is:%d\n",bill);
}
else{
 printf("the electricity is too high");
}
return 0;
}
