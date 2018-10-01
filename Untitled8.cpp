#include<stdio.h>
main(){
	int amount,i;
	float price,price2,totalprice,Totalprice,VAT;
	totalprice = 0;
	for(i=1;i<=10;i++)
	{
		printf("\nProduct#%d\n",i);
		printf("Enter amount of product:");
		scanf("%d",&amount);
		printf("Enter price of product:");
		scanf("%f",&price);
		price2 = amount * price;
		printf("Product#%d Price:%.2fBaht.",i,price2);
		totalprice = totalprice + price2;
		printf("\n--------------------------------------------");
    }
    printf("\nSubtotal price =%.2fBaht.",totalprice);
    VAT = totalprice * 0.07;
    printf("\nVAT(7%%) = %.2fBaht.",VAT);
    Totalprice = totalprice + VAT;
    printf("\nTOTAL PRICE = %.2fBaht.",Totalprice);
}
