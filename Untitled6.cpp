#include<stdio.h>
main(){
	int number,i,total = 0;
	for(i=1;i<=10;i++)
	{
		printf("Enter Number%d : ",i);
		scanf("%d",&number);
		total = total+number ;
	}
   	printf("Summation = %d",total);
}
