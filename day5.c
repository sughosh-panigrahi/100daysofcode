#include <stdio.h>

#include <math.h>
int main()
{
float principal;
printf("the principal amount is :");
scanf("%f",&principal);
float rate ;
printf("the principal amount rate is %f\n",rate);
scanf("%f",&rate);
float time;
printf("enter the time period:");
scanf("%f",&time);
float amount = principal *pow((1.0+rate/100.0),time);
float compound_intrest ;
compound_intrest = amount-principal;
printf("the compound intrest is %f",compound_intrest);
return 0;
}
