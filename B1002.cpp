#include <cstdio>
#include <cstring>
#include <stack>
#include <string>

using namespace std;

const char* dict[] = { "ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu" };

int main()
{
	char input[101];
	scanf("%s", input);

	int sum = 0;
	int len = strlen(input);
	for (int i = 0; i < len; i++)
	{
		sum += input[i] - '0';
	}

	stack<string> s;
	do
	{
		s.push(dict[sum % 10]);
		sum /= 10;
	} while (sum > 0);

	printf("%s", s.top().c_str());
	s.pop();
	while (!s.empty())
	{
		printf(" %s", s.top().c_str());
		s.pop();
	}
	printf("\n");

	return 0;
}
