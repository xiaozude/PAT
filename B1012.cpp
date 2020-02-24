#include <cstdio>

int main()
{
	int num[1000];
	int index[5] = { 0 };
	int value[5] = { 0 };

	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
		switch (num[i] % 5)
		{
		case 0:
			if (num[i] % 2 == 0)
			{
				index[0]++;
				value[0] += num[i];
			}
			break;
		case 1:
			index[1]++;
			if (index[1] % 2 == 0)
			{
				value[1] -= num[i];
			}
			else
			{
				value[1] += num[i];
			}
			break;
		case 2:
			index[2]++;
			value[2]++;
			break;
		case 3:
			index[3]++;
			value[3] += num[i];
			break;
		default:
			index[4]++;
			value[4] = num[i] > value[4] ? num[i] : value[4];
		}
	}

	for (int i = 0; i < 5; i++)
	{
		if (i != 0)
		{
			printf(" ");
		}
		if (index[i] == 0)
		{
			printf("N");
		}
		else
		{
			if (i == 3)
			{
				printf("%.1f", (double)value[i] / index[i]);
			}
			else
			{
				printf("%d", value[i]);
			}
		}
	}

	printf("\n");

	return 0;
}
