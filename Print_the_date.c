#include<stdio.h>
void dat(char *st)
{
	char st1[10][10] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	char st2[12][12] = { "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "ninteen" };
	char st3[12][12] = { "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninty" };
	int ch,count=0;
	if (st[3] == '1')
	{
		if (st[4] > '2')
		{
			printf("invalid input\n");
			return;
		}
	}
	if (st[0] == '0' && st[1] == '0'||st[0]>'3'||st[0]=='3'&&st[1]>'1')
	{
		printf("invalid input\n");
		return;
	}
	if (st[3] == '0' && st[4] == '0'||st[3]>'1')
	{
		printf("invalid input\n");
		return;
	}
	ch = ((st[8]-'0') * 10 +(st[9]-'0'));
	if (ch % 4 == 0)
		count = 1;
	ch = ((st[3]-'0') * 10 + (st[4]-'0'));
	switch (ch)
	{
	case 4:
	case 6:
	case 9:
	case 11:
		if (st[0] == '3'&&st[1] > '0')
		{

			printf("invalid input\n");
			return;
		}
		break;
	case 2:
		if (count == 0)
		{
			if (st[0] == '2'&&st[1] > '8')
			{
				printf("invalid input\n");
				return;
			}
		}
		else if (st[0] > '2')
		{
			printf("invalid input\n");
			return;
		}
		break;
	}
	if (st[0] > '1')
	{
		printf("%s\t", st3[st[0] - '2']);
		if (st[1]>'0')
		printf("%s\t", st1[st[1] - '1']);
	}
	else if (st[0]=='0')
		printf("%s\t", st1[st[1] - '1']);
	else
		printf("%s\t", st2[st[1] - '0']);
	printf("-");
	if (st[3] == '0')
		printf("%s\t", st1[st[4] -'1']);
	else
		printf("%s\t", st2[st[4] - '0']);
	printf("-\t");
	if (st[6] > '0')
	{
		printf("%s\t", st1[st[6] -'1']);
		printf("thousand\t");
		if (st[7] > '0')
		{
			printf("%s\t", st1[st[7] - '1']);
			printf("hundred\t");
			if (st[8] > '1')
			{
				printf("%s\t", st3[st[8] - '2']);
				if (st[9] > '1')
					printf("%s\t", st1[st[9] - '1']);
			}
			else if (st[8] == '0')
				printf("%s\t", st1[st[9] - '1']);
			else
				printf("%s\t", st2[st[9] - '0']);
		}
		else
		{
			if (st[8] > '1')
			{
				printf("%s\t", st3[st[8] - '2']);
				if (st[9] > '1')
					printf("%s\t", st1[st[9] - '1']);
			}
			else if (st[8] == '0')
				printf("%s\t", st1[st[9] - '1']);
			else
				printf("%s\t", st2[st[9] - '0']);
		}
	}
	else
	{
		if (st[7] > '0')
		{
			printf("%s\t", st1[st[7] - '1']);
			printf("hundred\t");
			if (st[8] > '1')
			{
				printf("%s\t", st3[st[8] - '2']);
				if (st[9] > '1')
					printf("%s\t", st1[st[9] - '1']);
			}
			else if (st[8] == '0')
				printf("%s\t", st1[st[9] - '1']);
			else
				printf("%s\t", st2[st[9] - '0']);
		}
		else
		{
			if (st[8] > '1')
			{
				printf("%s\t", st3[st[8] - '2']);
				if (st[9] > '1')
					printf("%s\t", st1[st[9] - '1']);
			}
			else if (st[8] == '0')
				printf("%s\t", st1[st[9] - '1']);
			else
				printf("%s\t", st2[st[9] - '0']);
		}
	}
}
int main()
{
	char st[50];
	int i;
	printf("enter date in this format dd-mm-yyyy\n");
	scanf("%s", st);
	for (i = 0; st[i]; i++)
	{
		if (i == 2 || i == 5)
			i++;
		if (st[i] >= '0'&&st[i] <= '9')
			continue;
		else
		{
			printf("invalid input\n");
			return 1;
		}
	}
	if (i > 10)
	{
		printf("invalid input\n");
		return 1;
	}
	if (st[2] != '-'&&st[5] != '-')
	{
		printf("invalid input\n");
		return 1;
	}
	dat(st);
	return 0;
}