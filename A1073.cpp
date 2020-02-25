#include <cstdio>

const int maxn = 10010;

char str[maxn];

int main()
{
	scanf("%s", str);

	if (str[0] == '-')
	{
		printf("-");
	}

	int pos = 0;
	while (str[pos] != 'E')
	{
		pos++;
	}

	int exp = 0;
	for (int i = pos + 2; str[i] != '\0'; i++)
	{
		exp = exp * 10 + str[i] - '0';
	}

	if (exp == 0)
	{
		for (int i = 1; i < pos; i++)
		{
			printf("%d", str[i]);
		}
	}

	if (str[pos + 1] == '-')
	{
		printf("0.");
		for (int i = 0; i < exp - 1; i++)
		{
			printf("0");
		}
		printf("%c", str[1]);
		for (int i = 3; i < pos; i++)
		{
			printf("%c", str[i]);
		}
	}
	else
	{
		printf("%c", str[1]);
		for (int i = 3; i < pos; i++)
		{
			printf("%c", str[i]);
			if (i - 2 == exp && pos - 3 != exp)
			{
				printf(".");
			}
		}
		for (int i = 0; i < exp - (pos - 3); i++)
		{
			printf("0");
		}
	}

	printf("\n");

	return 0;
}
