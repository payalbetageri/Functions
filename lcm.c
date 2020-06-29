#include<stdio.h>

int lcm(int a, int b)
{
	static int multi=0;
	multi+=b;
	if(multi%a==0 && multi%b==0)
		printf("%d\n",multi);
	else
		lcm(a,b);
}

int main()
{
	int a,b;
	printf("enter two positive integers");
	scanf("%d %d",&a, &b);
	if(a>b)
		lcm(b,a);
	else
		lcm(a,b);
}
