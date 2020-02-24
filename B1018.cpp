#include <cstdio>

int cton(char c)
{
	if (c == 'C') return 0;
	if (c == 'J') return 1;
	if (c == 'B') return 2;
	return -1;
}

char ntoc(int i)
{
	if (i == 0) return 'C';
	if (i == 1) return 'J';
	if (i == 2) return 'B';
	return '\0';
}

int main()
{
	int n;
	scanf("%d", &n);

	int A[3] = { 0 };
	int B[3] = { 0 };

	int flag_a = 0;
	int flag_b = 0;
	int flag_ab = 0;

	for (int i = 0; i < n; i++)
	{
		getchar();

		char a, b;
		scanf("%c %c", &a, &b);

		if (a == b)
		{
			flag_ab++;
		}
		else if (a == 'C' && b == 'J'
			|| a == 'J' && b == 'B'
			|| a == 'B' && b == 'C')
		{
			flag_a++;
			A[cton(a)]++;
		}
		else
		{
			flag_b++;
			B[cton(b)]++;
		}
	}

	printf("%d %d %d\n", flag_a, flag_ab, flag_b);
	printf("%d %d %d\n", flag_b, flag_ab, flag_a);
	
	int i = 2;
	if (A[i] < A[0]) i = 0;
	if (A[i] < A[1]) i = 1;
	
	int j = 2;
	if (B[j] < B[0]) j = 0;
	if (B[j] < B[1]) j = 1;

	printf("%c %c\n", ntoc(i), ntoc(j));

	return 0;
}
