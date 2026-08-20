#include <stdio.h>
int main(){
int total_seconds ;
int  hours,minutes,seconds;
printf("enter the time in seconds:");
scanf("%d",&total_seconds);
hours =total_seconds/3600;
minutes =(total_seconds%3600)/60;
seconds = total_seconds%60;
printf("convert the time in the format [%d:%d:%d]",hours,minutes,seconds);
return 0;
}

