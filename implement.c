#include<stdio.h>
int main (){
int marks;
printf("the marks of the student is:%d\n",marks);
scanf("%d",&marks);
if (marks>=90 && marks<=100){
printf("the student has scored A grade");
}
else if (marks >=80 && marks <=89){
printf("the student has secured B grade");
}
else if (marks >70 && marks <=79){
printf("the student has secured C grade ");
}
else if (marks>60 && marks< 69){
printf("the student has scored D grade");
}
else{
 printf("the student has scored F grade");
}
return 0;
}
