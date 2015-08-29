#include <stdio.h>
void maximum(int *a, int *d, int n)
{
	int max2, max1, i;
	max1 = 0;
	max2= a[0];
	for (i = 1; i < n; i++)
	{
		if (a[i]>a[max1])
		{
			d[1] = max2 = a[max1];
			max1 = i;
			d[0] = a[i];
		}
		else if (a[i] >max2)
		{
			if (a[i] == a[max1])
				continue;
			else
			{
				max2 = a[i];
				d[1] = max2;
			}
		}
		else
			continue;
	}
}
int main()
{
	int a[50], b[5], n, i;
	printf("enter the number of elements\n");
	scanf("%d", &n);
	if (n <= 0)
	{
		printf("invalid input\n");
		return 0;
	}
	printf("enter %d elements\n", n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	maximum(a, b, n);
	printf("max1\tmax2\n");
	for (i = 0; i < 2; i++)
		printf("%d\t", *(b + i));
	return 0;
}