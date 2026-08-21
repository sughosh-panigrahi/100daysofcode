#include<stdio.h>
int main(){
int days;
int fine;
printf("late submission of books by:");
scanf("%d",&days);
if(days==0){
printf("No late submission fee is applied thankyou for submittiong on time");
}
else if (days<=5){
fine=days*2;
printf("the late submission fee is:%d\n",fine);
}
else if(days<=10){
fine = (5*2)+((days-5)*4);
printf("the late submission fine is:%d\n",fine);
}
else if(days<30){
fine = (5*2)+(5*4)+((days-10)*6);
printf("the late submission fine is : %d\n",fine);
}
else{
printf("your membership has been cancelled due to excessive fine");
}
return 0 ;
}
