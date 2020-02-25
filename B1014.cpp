#include <cstdio>

const char* Day[] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };

int main()
{
	char A[61];
	char B[61];
	char C[61];
	char D[61];

	scanf("%s %s %s %s", A, B, C, D);

	int day = -1;
	int hour;
	int min;

	for (int i = 0; A[i] != '\0' && B[i] != '\0'; i++)
	{
		if (A[i] != B[i])
		{
			continue;
		}

		if (day == -1)
		{
			if (A[i] >= 'A' && A[i] <= 'G')
			{
				day = A[i] - 'A';
			}
		}
		else
		{
			if (A[i] >= '0' && A[i] <= '9')
			{
				hour = A[i] - '0';
				break;
			}
			else if (A[i] >= 'A' && A[i] <= 'N')
			{
				hour = A[i] - 'A' + 10;
				break;
			}
		}
	}

	for (int i = 0; C[i] != '\0' && D[i] != '\0'; i++)
	{
		if (C[i] == D[i])
		{
			if ((C[i] >= 'a' && C[i] <= 'z') || (C[i] >= 'A' && C[i] <= 'Z'))
			{
				min = i;
				break;
			}
		}
	}

	printf("%s %02d:%02d\n", Day[day], hour, min);

	return 0;
}
