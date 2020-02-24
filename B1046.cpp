#include <cstdio>

int main()
{
	int num[100][4];

	int n;
	scanf("%d", &n);

	int a = 0;
	int b = 0;
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d %d %d", &num[i][0], &num[i][1], &num[i][2], &num[i][3]);
		if (num[i][0] + num[i][2] == num[i][1] && num[i][0] + num[i][2] != num[i][3])
		{
			b++;
		}
		else if (num[i][0] + num[i][2] != num[i][1] && num[i][0] + num[i][2] == num[i][3])
		{
			a++;
		}
	}

	printf("%d %d\n", a, b);

	return 0;
}
