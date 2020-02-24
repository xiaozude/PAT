#include <cstdio>

const int Sickle = 29;
const int Galleon = 17 * Sickle;

struct Money
{
	int G;
	int S;
	int K;
};

int main()
{
	Money P;
	scanf("%d.%d.%d", &P.G, &P.S, &P.K);

	Money A;
	scanf("%d.%d.%d", &A.G, &A.S, &A.K);

	int p = P.G * Galleon + P.S * Sickle + P.K;
	int a = A.G * Galleon + A.S * Sickle + A.K;

	int x = a - p;

	if (x < 0)
	{
		printf("-");
		x = -x;
	}

	Money S;
	S.G = x / Galleon;
	S.S = x % Galleon / Sickle;
	S.K = x % Sickle;

	printf("%d.%d.%d\n", S.G, S.S, S.K);

	return 0;
}
