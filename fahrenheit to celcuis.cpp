#include<stdio.h>
int main()
{
	float fahrenheit,celcius;
	printf("enter the fahrenheit");
	scanf("%f",&fahrenheit);
	celcius=(fahrenheit-32)*3.0/9.0;
	printf("temperaturen in celcius%2f\n",celcius);
	return 0;
}
