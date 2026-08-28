#include<stdio.h>
#include<math.h>
int main(){
int num;
int remainder;
int original;
int result =0;
int digits;
printf("the number is :%d",num);
scanf("%d",&num);
original=num;
while(original!=0){
original/=10;
digits++;
}
original = num;
while (original!=0){
remainder =original %10;
result +=round(pow(remainder,digits));
original/=10;
}
if(result == num){
printf("the number is an armstrong number:%d",num);
}
else {printf("the number is not an armstrong number:%d",num);
}
return 0;
}
