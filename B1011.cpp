#include <cstdio>

int main()
{
	int n;
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++)
	{
		long a, b, c;
		scanf("%ld %ld %ld", &a, &b, &c);
		if (a + b > c)
		{
			printf("Case #%d: true\n", i);
		}
		else
		{
			printf("Case #%d: false\n", i);
		}
	}
	
	return 0;
}
