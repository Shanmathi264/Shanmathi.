#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year:");
	scanf("%d",&year);
	if(year%4==0||year%100==0&&year%400)
	{
		printf("leap year");
	}
	else
	{
		printf("Not a leap year");
	}
}
