#include<stdio.h>
void reverse(char *st, int start, int last)
{
	char temp;
	for (start, last; start < last; start++, last--)
	{
		temp = st[start];
		st[start] = st[last];
		st[last] = temp;
	}
}
void words(char *st)
{
	int i=0,start=0;
	while (st[i])
	{
		if (st[i] == ' ' || st[i] == '\t')
		{
			reverse(st, start, i - 1);
			i++;
			start = i;
		}
		else
			i++;
	}
	reverse(st, start, i-1);
	reverse(st, 0, i - 1);
}
int main()
{
	char st[200];
	printf("enter a sentence to reverse words\n");
	gets(st);
	words(st);
	printf("after reversing the words in sentence\n");
	puts(st);
	return 0;
}