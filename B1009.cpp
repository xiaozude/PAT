#include <cstdio>
#include <cstring>

int main()
{
	char str[81];
	fgets(str, 81, stdin);

	char words[80][81];
	int i = 0;
	int j = 0;
	int k = 0;
	do
	{
		if (str[i] == '\n')
		{
			continue;
		}
		else if (str[i] != ' ')
		{
			words[k][j++] = str[i];
		}
		else
		{
			words[k++][j] = '\0';
			j = 0;
		}
	} while (str[i++] != '\0');

	printf("%s", words[k]);
	for (int i = k - 1; i >= 0; i--)
	{
		printf(" %s", words[i]);
	}
	printf("\n");

	return 0;
}
