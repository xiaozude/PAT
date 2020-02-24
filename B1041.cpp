#include <cstdio>

struct
{
	char num[17];
	int a;
	int b;
} student[1000];

int main()
{
	int n1;
	scanf("%d", &n1);

	for (int i = 0; i < n1; i++)
	{
		scanf("%s %d %d", student[i].num, &student[i].a, &student[i].b);
	}

	int n2;
	scanf("%d", &n2);

	for (int i = 0; i < n2; i++)
	{
		int a;
		scanf("%d", &a);

		for (int j = 0; j < n1; j++)
		{
			if (student[j].a == a)
			{
				printf("%s %d\n", student[j].num, student[j].b);
				break;
			}
		}
	}

	return 0;
}
