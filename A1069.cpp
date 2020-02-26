#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

const int hole = 6174;

char num_max[5];
char num_min[5];
char num_tmp[5];

void int_to_str(int num, char * str)
{
	for (int i = 3; i >= 0; i--)
	{
		str[i] = num % 10 + '0';
		num /= 10;
	}
	str[4] = '\0';
}

int main()
{
	int MAX;
	int MIN;
	scanf("%d", &MAX);

	while (true)
	{
		int_to_str(MAX, num_tmp);

		sort(num_tmp, num_tmp + strlen(num_tmp));
		strcpy(num_min, num_tmp);
		reverse(num_tmp, num_tmp + strlen(num_tmp));
		strcpy(num_max, num_tmp);

		sscanf(num_max, "%d", &MAX);
		sscanf(num_min, "%d", &MIN);

		MAX -= MIN;

		int_to_str(MAX, num_tmp);

		printf("%s - %s = %s", num_max, num_min, num_tmp);

		if (MAX == hole || MAX == 0)
		{
			break;
		}
		else
		{
			printf("\n");
		}
	}

	return 0;
}