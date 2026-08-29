#include<stdio.h>
int main(){
int num ;
printf("enter a positive number :",num);
scanf("%d",&num);
for (int i = 1;i<=num;++i){
if(num%i==0){
printf("%d",i);
}
}
if(num<=0){
printf("please enter a valid number ",num);
}
else{printf("the factors are :%d\n",num);
}
printf("\n");
return 0;
}
