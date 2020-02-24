#include <cstdio>

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	
	int num[100];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}
	
	printf("%d", num[(n - m % n) % n]);
	for (int i = 1; i < n; i++)
	{
		printf(" %d", num[(n + i - m % n) % n]);
	}
	
	return 0;
}
