#include <cstdio>
#include <cstring>

const int maxn = 1010;

int main()
{
	char str[maxn];
	scanf("%s", str);

	int num[maxn] = { 0 };
	int len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		num[str[i] - '0']++;
	}

	for (int i = 0; i < maxn; i++)
	{
		if (num[i] > 0)
		{
			printf("%d:%d\n", i, num[i]);
		}
	}

	return 0;
}
