#include<stdio.h>
int repeated(char *st)
{
	int a[256] = { 0 }, i,j;
	for (i = 0; st[i]; i++)
	{
		a[st[i]]++;
	}
	for (j = 0; j < 256; j++)
	{
		if (a[j] >= i / 2)
			return j;
	}
	if (j == 256)
		return 0;
}
int main()
{
	char st[100];
	int r;
	printf("enter the string\n");
	scanf("%s", st);
	r=repeated(st);
	if (r == 0)
		printf("there are no charecters repeated more than half of length\n");
	else
	printf("repeated==%c\n", r);
	return 0;
}