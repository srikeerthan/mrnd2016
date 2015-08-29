#include<stdio.h>
void common(char *st1, char *st2)
{
	int a[256] = { 0 },i;
	for (i = 0; st1[i]; i++)
		a[st1[i]] = 1;
	for (i = 0; st2[i]; i++)
	{
		if (a[st2[i]] == 1)
		{
			printf("%c\t", st2[i]);
			a[st2[i]] = 0;
		}
	}
}
int main()
{
	char st1[50], st2[50];
	printf("enter first string\n");
	gets(st1);
	printf("enter second string\n");
	gets(st2);
	common(st1, st2);
	return 0;
}