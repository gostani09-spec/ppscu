#include<stdio.h>
int biggest(int a,int b,int c,int d)
{
	if(a>b&&a>c&&a>d)
	return a;
	if(b>a&&b>c&&b>d)
	return b;
	if(c>a&&a>b&&c>d)
	return c;
	else
	return d;
}
	int main()
	{
		int result;
		result=biggest(10,20,30,40);
		printf("biggest number is:%d",result);
		return 0;
	}
