#include <cstdio>
#include <algorithm>

using namespace std;

const int maxn = 1010;

struct Mooncake
{
	double store;
	double sell;
	double price;
} mooncake[maxn];

bool cmp(Mooncake a, Mooncake b)
{
	return a.price > b.price;
}

int main()
{
	int n;
	double d;
	scanf("%d %lf", &n, &d);
	for (int i = 0; i < n; i++)
	{
		scanf("%lf", &mooncake[i].store);
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%lf", &mooncake[i].sell);
		mooncake[i].price = mooncake[i].sell / mooncake[i].store;
	}

	sort(mooncake, mooncake + n, cmp);

	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (d < mooncake[i].store)
		{
			sum += d * mooncake[i].price;
			break;
		}
		else
		{
			sum += mooncake[i].sell;
			d -= mooncake[i].store;
		}
	}

	printf("%.2f", sum);

	return 0;
}