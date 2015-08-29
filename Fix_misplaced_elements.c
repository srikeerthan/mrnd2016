#include<stdio.h>
void swap(int a[], int n)
{
	int i, temp;;
	if (a[0] > a[1])
	{
		if (a[n - 1] < a[n - 2])
		{
			temp = a[0];
			a[0] = a[n - 1];
			a[n - 1] = temp;
			return;
		}
		for (i = 1; i < n; i++)
		{
			if (a[i] > a[i + 1])
				break;
		}
		temp = a[0];
		a[0] = a[n];
		a[n] = temp;
		return;
	}
	else if (a[n - 1] < a[n - 2])
	{
		for (i = 0; i < n - 1; i++)
		{
			if (a[i]>a[i + 1])
				break;
		}
		temp = a[n - 1];
		a[n - 1] = a[i];
		a[i] = temp;
		return;
	}
	else
	{
		int b, k, count = 0;
		for (i = 0; i < n; i++)
		{
			if (count == 2)
			{
				temp = a[b];
				a[b] = a[k];
				a[k] = temp;
				return;
			}
			if (a[i]>a[i + 1])
			{
				b = i;
				count++;
			}
			if (a[i] < a[i - 1])
			{
				k = i;
				count++;
			}
		}
	}
}
int  main()
{
	int a[50], n, i;
	printf("enter the number of elements\n");
	scanf("%d", &n);
	if (n <= 0)
	{
		printf(" invalid input........ \n");
		return 0;
	}
	printf("enter %d elements in sorted order with0ut similar numbers and with two places interchanged\n", n);
	for (i = 0; i < n; i++)
		scanf("%d", a + i);
	swap(a, n);
	printf("the sorted array is:\n");
	for (i = 0; i < n; i++)
		printf("%d\t", a[i]);
	return 0;
}