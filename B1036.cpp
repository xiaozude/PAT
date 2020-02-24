#include <cstdio>

int main()
{
	int n;
	char c;
	scanf("%d %c", &n, &c);

	for (int i = 0; i < n; i++)
	{
		printf("%c", c);
	}
	printf("\n");

	int num = n % 2 == 0 ? n / 2 : n / 2 + 1;
	for (int i = 1; i < num - 1; i++)
	{
		printf("%c", c);
		for (int j = 1; j < n - 1; j++)
		{
			printf(" ");
		}
		printf("%c\n", c);
	}
	
	for (int i = 0; i < n; i++)
	{
		printf("%c", c);
	}
	printf("\n");

	return 0;
}
