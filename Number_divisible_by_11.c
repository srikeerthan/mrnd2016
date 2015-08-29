/* to check whether given number is divisible by 11 or not with out using %11,/11*/
#include <stdio.h>
int division(int n)
{
	int d = 0, count = 0, s1 = 0, s2 = n;
	while (s2!= 0)
	{
		d = s2 % 10;
		count++;
		if (count == 2)
			break;
		s2 = s2 / 10;
	}
	if (count == 1)
		return 1;
	count = s2 = 0;
	while (n != 0)
	{
		d = n % 10;
		count++;
		if (count % 2 == 0)
		{
			s1 += d;
		}
		else
			s2 += d;
		n = n / 10;
	}
	if (s1 - s2 == 0)
		return 0;
	else
		return(division(s1 - s2));
}
int main()
{
	int n, r;
	printf("enter number to find divisible by 11 or not\n");
	flushall();
	scanf("%d",&n);
	r = division(n);
	if (r == 0)
		printf("divisible by 11\n");
	else
		printf("not divisible by 11\n");
	return 0;
}