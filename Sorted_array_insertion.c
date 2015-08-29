#include<stdio.h>
void insertion(int *a, int n, int p)
{
	int i, j;
	if (p <= a[0])
	{
		for (i = n; i != 0; i--)
		{
			a[i] = a[i - 1];
		}
		a[0] = p;
		return;
	}
	else if (p >= a[n - 1])
	{
		a[n] = p;
			return;
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (a[i] <= p&&a[i + 1] >= p)
			{
				for (j = n; j >= i + 1; j--)
					a[j] = a[j - 1];
				a[j + 1] = p;
				return;
			}
		}
	}
	
}
int main()
{
	int a[100] = {}, n = 0, i, p;
	printf("enter the numberof elements\n");
	scanf("%d", &n);
	if (n <= 0)
	{
		printf("input is invalid\n");
		return 0;
	}
	printf("enter %d elements in sorted order\n", n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("enter the element to be inserted\n");
	scanf("%d", &p);
	insertion(a, n, p);
	printf("the resultant array is\n");
	for (i = 0; i <= n; i++)
		printf("%d\t", a[i]);
	return 0;
}