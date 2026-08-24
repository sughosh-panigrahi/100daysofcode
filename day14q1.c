//Write a program to print the sum of the first n odd numbers.
#include<stdio.h>
int main(){
int n;
int sum  =0;
printf("the numbers are :%d",n);
scanf("%d",&n);
for(int i=1;i<=n;i++){
sum = sum +((2*i)-1);
}
printf("the sum of the first n odd numbers is :%d %d",sum ,n);
return 0;
}
