#include<stdio.h>
main(){
	int Inum;//Integer number
	printf("Enter Integer number:");
	scanf("%d",&Inum);
	if(Inum>0) 
	{
		printf("Positive Integer");
	}
	else if(Inum<0)
	{
		printf("Negative Integer");
	}
	else if(Inum==0)
	{
		printf("Zero");
	}
	else printf("ERROR");
}
