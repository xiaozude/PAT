#include <cstdio>
#include <cstring>

char str[1010];
int asc[26];

int main()
{
	fgets(str, 1010, stdin);
	
	memset(asc, 0, sizeof(asc));
	
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			asc[str[i] - 'A']++;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			asc[str[i] - 'a']++;
		}
	}
	
	int index = 0;
	for (int i = 1; i < 26; i++)
	{
		index = (asc[i] > asc[index]) ? i : index;
	}
	
	printf("%c %d", index + 'a', asc[index]);
	
	return 0;
}