#include <stdio.h>
int main(){
int num1,num2;
int result;
char operators ;
printf("the numbers are:");
scanf("%d %d",&num1,&num2);
printf("the operator is (+,-,*,%) :%c ",operators);
scanf(" %c",&operators);
switch(operators){
case '+':
result = num1 + num2;
printf("result = %d\n",result,num1,num2);
	break;

case '-':
result =num1 - num2;
printf("result = %d\n",result,num1,num2);
	break;

case '*':
result =num1 * num2;
printf("result = %d\n",result,num1,num2);
	break;

case '%':
result= num1 % num2;
printf("result = %d\n",result,num1,num2);
	break;
}
return 0;
}

