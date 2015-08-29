/* to check whether given string is palindrome or not*/
#include <stdio.h>
int palindrome(char *st)
{
	int i, j,flag=0;
	for (i = 0; st[i]; i++);	
	for (i=i-1 ,j=0; i>=0; i--,j++)
	{
		if (st[j] != st[i])
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
		return 1;
	else
		return 0;
}
int main()
{
	char st[100] = {""};
	int r;
	printf("enter the string to find palindrome or not\n");
	gets(st);
	r = palindrome(st);
	if (r == 1)
		printf("given string is not a palindrome\n");
	else
		printf("given string is palindrome\n");
	return 0;
}