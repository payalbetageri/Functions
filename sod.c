#include<stdio.h>

int sod(int x)
{
	if(x==0)
		return 0;
	return (x%10+sod(x/10));
}

int main()
{
	int x,y;
	printf("enter the digits");
	scanf("%d: ",&x);
	y=sod(x);
	printf("%d\n",y);
}
