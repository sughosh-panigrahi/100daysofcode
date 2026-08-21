#include <stdio.h>
#include <math.h>
int main(){
float cost_price,selling_price;
printf("the cost price of the product is:");
scanf("%f",&cost_price);
printf("the selling price of the product is:");
scanf("%f",&selling_price);
if(selling _price > cost_price){
printf("the product was sold with profit");
}
else if(cost_price < selling_price){
printf("the product was sold as loss");
}
else{
printf("neither profit nor loss was attained");
}
return 0;
}
