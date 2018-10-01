#include<stdio.h>
float x,y,ans;
int menu;
float plus(float x,float y)
{
	printf("A + B = ANSWER\nEnter A:");
	scanf("%f",&x);
	printf("Enter B:");
	scanf("%f",&y);
	ans = x + y;
}
float minus(float x,float y)
{
	printf("A - B = ANSWER\nEnter A:");
	scanf("%f",&x);
	printf("Enter B:");
	scanf("%f",&y);
	ans = x - y;
}
float multiply(float x,float y)
{
	printf("A * B = ANSWER\nEnter A:");
	scanf("%f",&x);
	printf("Enter B:");
	scanf("%f",&y);
	ans = x * y;
}
float divide(float x,float y)
{
	printf("A / B = ANSWER\nEnter A:");
	scanf("%f",&x);
	printf("Enter B:");
	scanf("%f",&y);
	ans = x / y;
}
main(){
	printf("\n--------Operation Menu----------\n[1] + Plus\n[2] - Minus\n[3] * Multiply\n[4] / Divide\n");
	printf("Enter number for choose operation:");
	scanf("%d",&menu);
	printf("--------------------------------\n");
	if(menu == 1)
	{
		plus(x,y);
	}
	else if(menu == 2)
	{
		minus(x,y);
	}
	else if(menu == 3)
	{
		multiply(x,y);
	}
	else if(menu == 4)
	{
		divide(x,y);
	}
	printf("ANSWER = %f",ans);
}
