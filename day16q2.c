
#include<stdio.h>
#include<string.h>
int main(){
int num;
int remainder;
int reversednum=0;
int original;
printf("the number is :%d",num);
scanf("%d",&num);
original=num; 
while(num!=0){
  remainder= num%10;
reversednum=reversednum*10+remainder;
num/=10;
}
if (original==reversednum){
printf("the number is a palindrome :%d",original);
}
else{printf(" the number is not a palindrome :%d",original);
}
return 0;
}


