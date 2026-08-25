#include<stdio.h>
int main(){
int reversenum =0;
int num;
int remainder;
printf("the number is :%d",num);
scanf("%d",&num);
while(num!=0){
remainder=num%10;
reversenum =reversenum*10+remainder;
num/=10;
}
printf("the reversed number is :%d \n",reversenum);
return 0;
}
