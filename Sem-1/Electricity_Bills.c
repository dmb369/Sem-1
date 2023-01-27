// Write a C Program to print an electricity bills.

#include<stdio.h>
int main()
{
	int e, b;
	scanf("%d",&e);
	if(e<=50 && e>=0)
	{
		b=e*30;
		printf("%d",b);
	}
	else if(e<=100 && e>50)
	{
		b=50*30+(e-50)*35;
		printf("%d",b);
	}
	else if(e<=150 && e>100)
	{
		b=50*30+50*35+(e-100)*40;
		printf("%d",b);
	}
	else 
	{
		b=50*30+50*35+50*40+(e-150)*50;
		printf("%d",b);
	}
	return 0;
}