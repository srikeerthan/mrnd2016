/* finding nth fibonacci number from 1 1 2 3 5 8 13...... fibonacci series*/
#include<stdio.h>
void fibo(int n)
{
	int i = 1, r1 = 0, r2 = 1, s = 0;
	if (n == 1)
		printf("the %d fibonacci series is %d\n", n, n);
	else
	{
		while (i < n)
		{
			s = r2 + r1;
			r1 = r2;
			r2 = s;
			i++;
		}
		printf("the %d fibonacci number from fibonacci series is %d\n", n, s);
	}
}
int  main()
{	
	int n;
	printf("enter the number of fibonacci number to print\n");
	scanf("%d", &n);
	if (n <= 0)
	{
		printf("invalid input \n");
		return 0;
	}
	fibo(n);
	return 0;
}