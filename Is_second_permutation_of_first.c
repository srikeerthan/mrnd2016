/*to check whether second string is one of permutation of first string*/
#include<stdio.h>
int permu(char *st1, char *st2)
{
	int a[256] = {0}, i;
	for (i = 0; st1[i]; i++)
	{
		if (a[st1[i]] !=0)
		{
			++a[st1[i]];
		}
		else
			a[st1[i]] = 1;
	}
	for (i = 0; st2[i]; i++)
	{
		a[st2[i]]--;
	}
	for (i = 0; i < 256; i++)
	{
		if (a[i]<0 || a[i]>0)
			return 1;
	}
	return 0;
}
int main()
{
	char st1[50], st2[50],r=0;
	printf("first string\n");
	scanf("%s", st1);
	printf("enter second string \n");
	scanf("%s", st2);
	r=permu(st1, st2);
	if (r == 0)
		printf("the second string is one of permutation of first string\n");
	else
		printf("the second string is \"not\" one of permutation of first string\n");
	return 0;
}