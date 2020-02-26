#include <cstdio>
#include <cstring>

const int maxn = 10000000;
int prime[maxn];
int count = 0;
bool flag[maxn];

int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	
	memset(flag, true, sizeof(flag));
	
	for (int i = 2; i < maxn && count < n; i++)
	{
		if (flag[i])
		{
			prime[count++] = i;
			for (int j = i * 2; j < maxn; j += i)
			{
				flag[j] = false;
			}
		}
	}
	
	for (int i = m - 1, j = 1; i < n; i++, j++)
	{
		if (j % 10 != 0 && i != n - 1)
		{
			printf("%d ", prime[i]);
		}
		else if (j % 10 == 0 && i != n - 1)
		{
			printf("%d\n", prime[i]);
		}
		else
		{
			printf("%d", prime[i]);
		}
	}
	
	return 0;
}