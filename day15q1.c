#include<stdio.h>
int main(){
int n;
int fact =1;
printf("the number is :%d",n);
scanf("%d",&n);
for(int i=1;i<=n;i++){
fact=fact*i;
}
printf("the factorial of n is :%d %d",fact,n);


return 0;
}
