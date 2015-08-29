/*left rotation(if positive number) of an array*/
#include<stdio.h>
void rotation(int *a, int n, int r)
{
	int i = 0;
	while (i < r)
	{
			int temp, j;
			for ( j = 0; j < n - 1; j++)
			{
				temp = a[n - 1];
				a[n - 1] = a[j];
				a[j] = temp;
			}
			i++;
	}
}
int  main()
{
	int a[50],n,r,i;
	printf("enter number of elements\n");
	scanf("%d", &n);
	if (n < 0)
	{
		printf("invalid input\n");
		return 1;
	}
	printf("enter the %d elements\n", n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("enter the number of rotations\n");
	scanf("%d", &r);
	if (r < 0)
	{
		printf("invalid input\n");
		return 1;
	}
	r = r%n;
	rotation(a, n, r);
	printf("the resultant array is:\n");
	for (i = 0; i < n; i++)
		printf("%d\t", a[i]);
	return 0;
}