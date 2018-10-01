#include<stdio.h>
#include<math.h>
main(){
	float price,weight;
	printf("Enter weight of product(kg):");
	scanf("%f",&weight);
	if(weight>1)
	{
		price = 20.00 * ceil(weight);
	}
	else if(weight<=1)
	{
		price = 30.00;
	}
	printf("Shiping cost=%.2fBaht",price);
}
