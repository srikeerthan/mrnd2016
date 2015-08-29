#include<stdio.h>
void tuple(int *a, int n, int s)
{
	int i, j, flag = 1, temp, b[100] = { 0 }, l = 0, k = 0, count = 0;
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
 			if (a[i] + a[j] == s)
			{
				for (l = 0; l < k; l++)
				{
					if ((a[i] == b[l]) || (a[j] == b[l]))
					{
						count = 1;
						break;
					}
				}
				if (count == 0)
				{
					printf("%d\t%d\n", a[i], a[j]);
					temp = a[i + 1];
					a[i + 1] = a[j];
					a[j] = temp;
					b[k] = a[i];
					i++;
					k++;
					flag = 0;
				}
				count = 0;
			}
		}
	}
	if (flag==1)
		printf("no tuples\n");
}

int main()
{
	int a[60], n, i, s;
	printf("enter the number of elements\n");
	scanf("%d", &n);
	if (n <= 0)
	{
		printf("invalid input\n");
		return 1;
	}
	printf("enter %d elements\n", n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("enter the sum\n");
	scanf("%d", &s);
	if (s < 0)
	{
		printf("invalid input\n");
		return 1;
	}
	tuple(a, n, s);
	return 0;
}