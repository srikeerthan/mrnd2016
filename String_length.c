#include<stdio.h>
int length(char *st)
{
	int i;
	for (i = 0; st[i]; i++);
	return i;
}
int main()
{
	char st[100];
	int l;
	printf("enter string whose length have to find\n");
	gets(st);
	l=length(st);
	printf("length of the string is %d\n", l);
	return 0;
}