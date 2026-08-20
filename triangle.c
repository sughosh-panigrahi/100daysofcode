#include <stdio.h>
int main(){
int sidea,sideb ,sidec;
printf("the length of the sides are :%d\n %d\n %d\n",sidea ,sideb, sidec);
scanf("%d %d %d",&sidea ,&sideb,&sidec);
if(sidea ==sideb && sideb==sidec){
printf("the triangle is an equilateral triangle");
}
else if (sidea ==sideb || sideb == sidec|| sidea== sidec){
printf("The triangle is an isosceles" );
}
else{

printf("the triangle is scalene");
}
return 0;
}
