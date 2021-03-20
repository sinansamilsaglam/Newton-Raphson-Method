#include<stdio.h>
#include<math.h>
#define hata 0.000001

float f(float x)
{
	//e^x-3x=0 [0,1] için
	return exp(x)-3*x;
	//x^2-7=0 [2,3] için
	//return x*x-7; do içindeki x0=x-f(x)/(2*x); olmalý
}
int main()
{
	float x0,x;
	printf("Input X0 Value \n");
	scanf("%f",&x0);
	do
	{
		x=x0;
		x0=x-f(x)/(exp(x)-3);
		printf("%f \n",x0);
	}
	while(fabs(x0-x)>hata);
	getch();
}
