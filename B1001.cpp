#include <cstdio>

int main()
{
	int num;
	scanf("%d", &num);
	
	int step;
	for (step = 0; num != 1; step++)
	{
		num = (num % 2 == 0) ? num / 2 : (3 * num + 1) / 2;
	}
	printf("%d\n", step);

	return 0;
}
