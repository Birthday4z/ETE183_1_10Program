#include<stdio.h>
main(){
	int Inum;//Integer number
	printf("Enter Integer number:");
	scanf("%d",&Inum);
	if(Inum==0) 
	{
		printf("Zero");
	}
	else if((Inum%2)==0)
	{
		printf("Even");
	}
	else printf("Odd");
}
