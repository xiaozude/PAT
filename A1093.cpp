#include <cstdio>
#include <cstring>

const int maxn = 100010;
const int modn = 1000000007;
char str[maxn];
int p[maxn] = { 0 };

int main()
{
	scanf("%s", str);
	
	int len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		if (i > 0)
		{
			p[i] = p[i - 1];
		}
		if (str[i] == 'P')
		{
			p[i]++;
		}
	}
	
	int ans = 0;
	int t = 0;
	for (int i = len - 1; i >= 0; i--)
	{
		if (str[i] == 'T')
		{
			t++;
		}
		else if (str[i] == 'A')
		{
			ans = (ans + p[i] * t) % modn;
		}
	}
	
	printf("%d", ans);
	
	return 0;
}
