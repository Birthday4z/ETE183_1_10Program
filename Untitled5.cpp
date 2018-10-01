#include<stdio.h>
#include<math.h>
float A,B,C,a,ans1,ans2a,ans2b;
main(){
	printf("[A]x^2+[B]x+[C]=0\nEnter A,B,C\n");
	scanf("%f %f %f",&A,&B,&C);
	a = (B*B)-4*A*C;
	if(a == 0)
	{
		ans1 = -B/(2*A);
		printf("Answer X=%f",ans1);
	}
	else if(a > 0)
	{
		ans2a = (-B+(sqrt((B*B)-(4*A*C))))/(2*A);
		ans2b = (-B-(sqrt((B*B)-(4*A*C))))/(2*A);
		printf("Answer X=%f and X=%f",ans2a,ans2b);
	}
	else printf("The answer are imaginary number");
}
