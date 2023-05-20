#include<stdio.h>
int main()
{
	float a,b;
	char ch;
	printf("enter a : \n");
	scanf("%f",&a);
	printf("enter b : \n");
	scanf("%f",&b);
	printf("enter an operator (+,-,*,/)\n");
	scanf("%s", &ch);
	if (ch=='+')
	{
		printf("%f",a+b);
	}
	else if(ch == '-')
	{
		printf("%f",a-b);
	}
	else if(ch == '*')
	{
		printf("%f",a*b);
	}
	else if(ch == '/')
	{
		printf("%f",a/b);
	}
	else 
	{
		printf("invalid operator\n");
	}
	return 0;
}