#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

bool cmp(string s1, string s2)
{
	return s1.length() < s2.length();
}

int main()
{
	int n;
	cin >> n;
	getchar();

	string s;
	stack<char> st;
	vector<string> v;

	for (int i = 0; i < n; i++)
	{
		getline(cin, s);
		reverse(s.begin(), s.end());
		v.push_back(s);
	}

	sort(v.begin(), v.end(), cmp);

	for (int j = 0; j < v[0].length(); j++)
	{
		bool flag = true;
		char c = v[0][j];
		for (int i = 1; i < n; i++)
		{
			if (c != v[i][j])
			{
				flag = false;
				break;
			}
		}
		if (flag) st.push(c);
		else break;
	}

	if (st.empty())
	{
		cout << "nai";
	}
	else
	{
		while (!st.empty())
		{
			cout << st.top();
			st.pop();
		}
	}

	return 0;
}
