#include<stdio.h>
int  message(char *st1, char *st2, char *st)
{
	int i,length,j;
	for (length = 0; st1[length]; length++);	
	if (length % 2 != 0)
		return 1;
	for (i = 0,j=length-1;i<j; i++,j--)
	{
		switch (st1[i])
		{
		case '(': 
			if (st1[j] != ')')
				return 1;
			break;
		case '[':
			if (st1[j] != ']')
				return 1;
			break;
		case '{':
			if (st1[j] != '}')
				return 1;
			break;
		case '<':
			if (st1[j] != '>')
				return 1;
			break;
		default:
			return 1;
		}
	}
	for (i = 0; i < (length / 2); i++)
		st[i] = st1[i];
	for (i, j = 0; st2[j]; j++, i++)
		st[i] = st2[j];
	for (j = length / 2, i; st1[j]; j++, i++)
		st[i] = st1[j];
	st[i] = '\0';
	return 0;
}
int main()
{
	char st1[50], st2[60],st[100],r;
	printf("enter set of braces in which you want to insert message\n");
	scanf("%s", st1);
	printf("enter messsage\n");
	scanf("%s", st2);
	r=message(st1, st2, st);
	if (r == 1)
	{
		printf("invalid input\n");
		return 1;
	}
	else
		printf("the string is---\t%s\n", st);
	return 0;
}