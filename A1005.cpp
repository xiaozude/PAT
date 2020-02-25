#include <cstdio>
#include <stack>
#include <string>

using namespace std;

const char* num[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

int main()
{
	char input[102];
	scanf("%s", input);

	int sum = 0;
	for (int i = 0; input[i] != '\0'; i++)
	{
		sum += input[i] - '0';
	}

	stack<string> s;
	do
	{
		s.push(num[sum % 10]);
		sum /= 10;
	} while (sum > 0);

	printf("%s", s.top().c_str());
	s.pop();
	while (!s.empty())
	{
		printf(" %s", s.top().c_str());
		s.pop();
	}

	return 0;
}
