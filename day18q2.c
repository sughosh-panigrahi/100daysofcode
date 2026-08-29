#include <stdio.h>
int main(){
int num1 ;
int num2 ;
int hcf;
printf("Enter the  numbers:%d %d",num1,num2);
scanf("%d %d",&num1,&num2);
while (num2!=0){
int remainder = num1 % num2;
num1 = num2;
num2=remainder;
}
hcf = num1;
printf("HCF = %d",num1);
return 0;
}
