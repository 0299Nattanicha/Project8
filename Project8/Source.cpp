#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int num[3], temp;
	char str[4];
	scanf("%d %d %d", &num[0], &num[1], &num[2]);
	scanf("%s",str);
	//printf("%d %d %d ", num[0], num[1], num[2]);
	//printf("\n%s", str);
	for (int i = 0; i < 3; i++)
	{
		for (int j = i + 1; j < 3; j++)
		{
			if (num[i] > num[j])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	if (str[0] == 'A')
	{
		printf("%d ", num[0]);
	}
	else if (str[0] == 'B')
	{
		printf("%d ", num[1]);
	}
	else if (str[0] == 'C')
	{
		printf("%d ", num[2]);
	}
	if (str[1] == 'A')
	{
		printf("%d ", num[0]);
	}
	else if (str[1] == 'B')
	{
		printf("%d ", num[1]);
	}
	else if (str[1] == 'C')
	{
		printf("%d ", num[2]);
	}
	if (str[2] == 'A')
	{
		printf("%d ", num[0]);
	}
	else if (str[2] == 'B')
	{
		printf("%d ", num[1]);
	}
	else if (str[2] == 'C')
	{
		printf("%d ", num[2]);
	}

	return 0;
}