#include <cstdio>
#include <cstring>

int main()
{
	char str[81];
	scanf("%s", str);
	
	int len = strlen(str);

	int n1 = 1;
	int n2 = len;
	int n3 = 1;

	for (int i = 0; i < len; i++)
	{
		if (n2 - 2 >= n1 + 1)
		{
			n1++;
			n3++;
			n2 -= 2;
		}
		else
		{
			break;
		}
	}

	for (int i = 0; i < n1 - 1; i++)
	{
		printf("%c", str[i]);
		for (int j = 1; j < n2 - 1; j++)
		{
			printf(" ");
		}
		printf("%c\n", str[len - i - 1]);
	}

	for (int i = 0; i < n2; i++)
	{
		printf("%c", str[n1 - 1 + i]);
	}

	printf("\n");

	return 0;
}
