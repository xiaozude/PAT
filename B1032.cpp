#include <cstdio>

const int maxn = 100010;

int sum[maxn];

int main()
{
	int n;
	scanf("%d", &n);

	int id, max_id;
	int score, max_score = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &id, &score);
		sum[id] += score;
		if (sum[id] > max_score)
		{
			max_id = id;
			max_score = sum[id];
		}
	}

	printf("%d %d", max_id, max_score);

	return 0;
}
