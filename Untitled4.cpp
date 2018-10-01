#include<stdio.h>
int i;
float Num,Ans;//Number,Answer
main(){
	printf("Enter Number:");
	scanf("%f",&Num);
	printf("Multiplication table of %.2f\n",Num);
	for(i=1;i<=12;i++)
	{
		Ans = Num * i;
		printf("%.2f x %d = %.2f\n",Num,i,Ans);
	}
}
