#include <stdio.h>
int main(){
int n;
int run=0;
int binary[100];
int i =0;
printf("enter the decimal number:",n);
scanf("%d",&n);
if(n==0){
printf("the binary is equivalent to 0");
}
else{
while(n>0){
int rem=n%2;
binary[i]=rem;
n=n/2;
i++;
}
printf("the binary is");
for(int j=i-1;j>=0;j--){
printf("%d",binary[j]);
}
}
return 0;
}

