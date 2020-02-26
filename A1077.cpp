#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

char str[100][257];

int main()
{
	int n;
	scanf("%d", &n);
	getchar();

	int len = 256;
	for (int i = 0; i < n; i++)
	{
		fgets(str[i], 256, stdin);
		if (len < strlen(str[i])) len = strlen(str[i]);
		reverse(str[i], str[i] + strlen(str[i]));
	}

	int pos = 0;
	for (int j = 0; j < len; j++)
	{
		bool flag = true;
		char c = str[0][j];
		for (int i = 1; i < n; i++)
		{
			if (c != str[i][j])
			{
				flag = false;
				break;
			}
		}
		if (flag) pos++;
		else break;
	}

	if (pos == 0)
	{
		printf("nai");
	}
	else
	{
		for (int i = pos - 1; i >= 0; i--)
		{
			printf("%c", str[0][i]);
		}
	}

	return 0;
}
