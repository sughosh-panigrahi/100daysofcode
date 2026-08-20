#include <stdio.h>
int main(){
int a =6;
int b=14;
printf("before swap a=%d amd b=%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("after swap a =%d and b= %d",a,b);
return 0;
}
