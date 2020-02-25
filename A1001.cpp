#include <cstdio>

int num[10];

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);

	int sum = a + b;
	if (sum < 0)
	{
		printf("-");
		sum = -sum;
	}

	int n = 0;
	while (sum > 0)
	{
		num[n++] = sum % 1000;
		sum /= 1000;
	}

	printf("%d", num[n - 1]);
	for (int i = n - 2; i >= 0; i--)
	{
		printf(",%03d", num[i]);
	}
	printf("\n");

	return 0;
}
