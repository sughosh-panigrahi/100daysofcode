#include <stdio.h>
int main(){
int n;
int prod= 1;
printf("the number is :%d",n);
scanf("%d",&n);
for (int i=1;i<=n;i++){
prod = prod*(2*i);
}
printf("the product of the first n even numbers is :%d %d",prod,n);
return 0;
}

