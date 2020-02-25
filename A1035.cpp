#include <cstdio>
#include <queue>
#include <string>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);

	char user[11];
	char pass[11];

	queue<string> q;
	int count = 0;

	for (int i = 0; i < n; i++)
	{
		scanf("%s %s", user, pass);

		bool flag = false;
		for (int j = 0; pass[j] != '\0'; j++)
		{
			if (pass[j] == '1')
			{
				pass[j] = '@';
				flag = true;
			}
			else if (pass[j] == '0')
			{
				pass[j] = '%';
				flag = true;
			}
			else if (pass[j] == 'l')
			{
				pass[j] = 'L';
				flag = true;
			}
			else if (pass[j] == 'O')
			{
				pass[j] = 'o';
				flag = true;
			}
		}

		if (flag)
		{
			q.push(user);
			q.push(pass);
			count++;
		}
	}

	if (count == 0)
	{
		if (n == 1)
		{
			printf("There is 1 account and no account is modified\n");
		}
		else
		{
			printf("There are %d accounts and no account is modified\n", n);
		}
	}
	else
	{
		printf("%d\n", count);
		
		while (!q.empty())
		{
			printf("%s ", q.front().c_str());
			q.pop();
			printf("%s\n", q.front().c_str());
			q.pop();
		}
	}

	return 0;
}
