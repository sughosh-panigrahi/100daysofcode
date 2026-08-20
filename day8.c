#include<stdio.h>
int main(){
char ch;
printf("the character is ");
scanf("%c",&ch);
if(ch >='A'&& ch<+ 'Z'){
printf("the character is an uppercase alphabet: %c\n",ch);
}
else if (ch >='a' && ch<= 'z'){
printf("the character is an lowercase alphabet:%c\n",ch);
}
else if (ch>=0 && ch<=9){
printf("the character is a number:%c\n ",ch);
}
else  {
printf("the character is a special character:%c\n ",ch);
}
return 0;
}


