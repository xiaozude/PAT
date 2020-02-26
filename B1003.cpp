#include <cstdio>
#include <cstring>

int main()
{
	int n;
	scanf("%d", &n);

	char str[101];
	for (int i = 0; i < n; i++)
	{
		scanf("%s", str);

		int p_pos = -1;
		int p_num = 0;
		int t_pos = -1;
		int t_num = 0;
		int other = 0;

		for (int j = 0; str[j] != '\0'; j++)
		{
			if (str[j] == 'P')
			{
				p_pos = j;
				p_num++;
			}
			else if (str[j] == 'T')
			{
				t_pos = j;
				t_num++;
			}
			else if (str[j] != 'A')
			{
				other++;
			}
		}

		if (p_num != 1 || t_num != 1 || other != 0 || p_pos + 1 >= t_pos)
		{
			printf("NO\n");
			continue;
		}

		int low = p_pos;
		int mid = t_pos - p_pos - 1;
		int high = strlen(str) - t_pos - 1;

		if (low == high - (mid - 1) * low)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}

	return 0;
}
