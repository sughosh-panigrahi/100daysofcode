#include<stdio.h>
int main (){
int a,b,t;
printf("the value of a is ");
scanf("%d",&a);
printf("the value of b is ");
scanf("%d",&b);
t=a;
b=a;
b=t;
printf("new value of a =%d",a);
printf("the new value of b = %d",b);
return 0;
}

