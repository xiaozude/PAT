#include <cstdio>
#include <cstring>

int main()
{
	char str[1001];
	char num[1001];

	int div;
	scanf("%s %d", str, &div);
	int len = strlen(str);
	
	for (int i = 0; i < len; i++)
	{
		str[i] -= '0';
	}
	
	memset(num, 0, sizeof(num));
	
	int temp;
	if (str[0] >= div)
	{
		num[0] = str[0] / div;
		str[0] %= div;
	}
	for (int i = 1; i < len; i++)
	{
		temp = str[i - 1] * 10 + str[i];
		num[i] = temp / div;
		str[i] = temp % div;
	}
	
	int i = -1;
	while (++i < len)
	{
		if (num[i] != 0)
		{
			break;
		}
	}
	if (i == len)
	{
		printf("0");
	}
	while (i < len)
	{
		printf("%d", num[i++]);
	}
	printf(" %d", str[len - 1]);
	
	return 0;
}
