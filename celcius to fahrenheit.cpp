#include<stdio.h>
int main()
{
	float celcius,fahrenheit;
	printf("enter the temperature of celcius");
	scanf("%f",&celcius);
	fanhrenheit=(celcius*9/5)+32;
	printf("fahrenheit temperature:%,2f\n");
	return 0;
}
