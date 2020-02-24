#include <cstdio>
#include <cmath>

int main()
{
	int n;
	char c;
	scanf("%d %c", &n, &c);

	int x = sqrt((n + 1) / 2);

	for (int i = x; i >= 1; i--)
	{
		for (int j = 0; j < x - i; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < i * 2 - 1; j++)
		{
			printf("%c", c);
		}
		printf("\n");
	}

	for (int i = 2; i <= x; i++)
	{
		for (int j = 0; j < x - i; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < i * 2 - 1; j++)
		{
			printf("%c", c);
		}
		printf("\n");
	}

	int sum = x * x * 2 - 1;
	printf("%d\n", n - sum);

	return 0;
}
