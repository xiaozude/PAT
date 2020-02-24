#include <cstdio>

int main()
{
	int num;
	scanf("%d", &num);
	
	int temp = (num / 100) % 10;
	for (int i = 0; i < temp; i++)
	{
		printf("%c", 'B');
	}
	
	temp = (num / 10) % 10;
	for (int i = 0; i < temp; i++)
	{
		printf("%c", 'S');
	}
	
	temp = num % 10;
	for (int i = 0; i < temp; i++)
	{
		printf("%d", i + 1);
	}
		
	return 0;
}