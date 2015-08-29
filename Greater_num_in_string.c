/* finding the gratest number from two numbers if they given as strings*/
#include<stdio.h>
void greater(char str1[], char str2[])
{
	int i, j, count = 0,k=0,l=0;
	if (str1[0] == '-'&&str2[0] != '-')
	{
		printf("the maximum string is %s", str2);
		return;
	}
	if (str1[0] != '-'&&str2[0] == '-')
	{
		printf("the maximum string is %s", str1);
		return;
	}
	if (str1[0] == '-' &&str2[0] == '-')
	{
		for (i = 1; str1[i] == '0'&&str1[i]; i++);
		for (j = 1; str2[j] == '0'&&str2[i]; j++);
		for (int r = i,k=0; str1[r];r++, k++);
		for (int s = j,l=0; str2[s]; s++,l++);
		if (k==l)
		{
			for (i, j; str1[i] || str2[j]; i++, j++)
			{
				if (str1[i] == str2[j])
					continue;
				else if (str1[i] > str2[j])
				{
					count = 1;
					printf(" maximum string is %s", str2);
					return;
				}
				else
				{
					count = 1;
					printf("maximum string is %s", str1);
					return;
				}
			}
		}
		else if (k > l)
		{
			count = 1;
			printf(" maximum string is %s", str2);
			return;
		}
		else
		{
			count = 1;
			printf("maximum string is %s", str1);
			return;
		}
	}
	else
	{
		for (i = 0; str1[i] == '0'; i++);
		for (j = 0; str2[j] == '0'; j++);
		for (k=0, i; str1[i]; i++)
			k++;
		for (l=0,j; str2[j];j++)
			l++;
		if (k > l)
		{
			count = 1;
			printf(" maximum string is %s", str1);
			return;
		}
		else if (l>k)
		{
			count = 1;
			printf("maximum string is %s", str2);
			return;
		}
		 else if (k==l)
		{
			for (i, j; str1[i] || str2[j]; i++, j++)
			{
				if (str1[i] == str2[j])
					continue;
				else if (str1[i] > str2[j])
				{
					count = 1;
					printf("maximum string is %s", str1);
					return;
				}
				else
				{
					count = 1;
					printf("maximum string is %s", str2);
					return;
				}
			}
		}
	}
	if (count == 0)
	{
		printf("strings are equals");
		return;
	}
}
int main()
{
	char str1[80], str2[80];
	printf("enter the first string\n");
	scanf("%s", str1);
	printf("enter second string\n");
	scanf("%s", str2);
	greater(str1, str2);
	flushall();
	getchar();
	return 0;
}
