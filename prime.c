#include<stdio.h>

int prime(int x,int i)
{
	if(i==1)
		return 1;
	else
	{
		if(x%i==0)
			return 0;
		else
			prime(x,i-1);
	}
}

int main()
{
	int x;
	printf("enter the number");
	scanf("%d",&x);
	if(prime(x,x/2)==1)
		printf("it's prime\n");
	else
		printf("not prime\n");
}
