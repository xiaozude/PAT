#include <cstdio>

int main()
{
	char A[11], B[11];
	char a, b;
	scanf("%s %c %s %c", A, &a, B, &b);
	
	int Pa = 0;
	for (int i = 0; A[i] != '\0'; i++)
	{
		if (A[i] == a)
		{
			Pa = Pa * 10 + (a - '0');
		}
	}
	
	int Pb = 0;
	for (int i = 0; B[i] != '\0'; i++)
	{
		if (B[i] == b)
		{
			Pb = Pb * 10 + (b - '0');
		}
	}

	printf("%d\n", Pa + Pb);
	
	return 0;
}
