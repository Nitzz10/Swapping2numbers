#include <stdio.h>
int main()
{
	int a,b,x;
	printf("Enter 1st number:");
	scanf("%d",&a);
	printf("Enter 2nd number:");
	scanf("%d",&b);
	x=a;
	a=b;
	b=x;
	printf("The swapped numbers are: %d  %d",a,b);
	return 0;
}
