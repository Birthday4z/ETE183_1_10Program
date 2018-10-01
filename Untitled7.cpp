#include<stdio.h>
float a,b,c;
main(){
	printf("Enter each side length of triangle(3 Side)\n");
	scanf("%f %f %f",&a,&b,&c);
	if(a+b>c && a+c>b && b+c>a)
	{
		printf("It can be triangle");
	}
	else printf("It can't be triangle");
}
