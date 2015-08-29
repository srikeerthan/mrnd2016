#include<stdio.h>
int sum( int n)
{
	int s=0,i;
	for (i = 0; n!=0; i++)
	{
		s += n%10;
		n = n / 10;
	}
	return s;
}
void main()
{
	int n,s=0;
	printf(" enter the number to find sum of digits\n");
	scanf("%d", &n);
	s=sum(n);
	printf(" sum is %d", s);
	flushall();
	getchar();
}