#include<stdio.h>
void element(char st[],int k)
{
	int i;
	for (i = 0;st[i]; i++)
	{
		 if (st[i + k] == '\0')
		{
			printf("%d element in reverse order from string is %c\n", k,st[i]);
			return;
		}
	}
	if (st[i] == '\0')
		printf("given kth value exceeds lentgh ofthe string\n");
	return;
}
int main()
{
	char st[20];
	int k;
	printf("enter string\n");
	scanf("%s", st);
	printf("enter the number of the charecter to print in reverse order from string\n");
	flushall();
	scanf("%d", &k);
	if (k <= 0)
	{
		printf("invalid input\n");
		return 0;
	}
	element(st, k);
	return 0;
}