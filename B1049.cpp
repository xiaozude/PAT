#include <cstdio>

int main()
{
	int n;
	scanf("%d", &n);

	double num;
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%lf", &num);
		sum += num * (n - i) * (i + 1);
	}

	printf("%.2f\n", sum);

	return 0;
}
