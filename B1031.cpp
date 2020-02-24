#include <cstdio>
#include <cctype>

const int weight[] = { 7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2 };
const char change[] = { '1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2' };

int main()
{
	int n;
	scanf("%d", &n);

	bool flag = false;
	char id[19];
	for (int i = 0; i < n; i++)
	{
		scanf("%s", id);
		
		int sum = 0;
		for (int j = 0; j < 18; j++)
		{
			if (j == 17)
			{
				if (change[sum % 11] != id[17])
				{
					printf("%s\n", id);
					flag = true;
				}
				break;
			}

			if (!isdigit(id[j]))
			{
				printf("%s\n", id);
				flag = true;
				break;
			}

			sum += (id[j] - '0') * weight[j];
		}
	}

	if (!flag)
	{
		printf("All passed\n");
	}

	return 0;
}
