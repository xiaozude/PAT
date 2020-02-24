#include <cstdio>
#include <algorithm>

using namespace std;

const int maxn = 100010;

struct Person
{
	char name[6];
	int year;
	int month;
	int day;
} person[maxn];

bool isdate(Person p)
{
	if (p.year < 1814 || p.year > 2014)
	{
		return false;
	}
	else if (p.year == 1814)
	{
		if (p.month == 9)
		{
			if (p.day < 6)
			{
				return false;
			}
		}
		else if (p.month < 9)
		{
			return false;
		}
	}
	else if (p.year == 2014)
	{
		if (p.month == 9)
		{
			if (p.day > 6)
			{
				return false;
			}
		}
		else if (p.month > 9)
		{
			return false;
		}
	}
	
	return true;
}

bool cmp(Person p1, Person p2)
{
	if (p1.year == p2.year)
	{
		if (p1.month == p2.month)
		{
			return p1.day < p2.day;
		}
		else
		{
			return p1.month < p2.month;
		}
	}
	else
	{
		return p1.year < p2.year;
	}
}

int main()
{
	int n;
	scanf("%d", &n);

	int count = 0;

	for (int i = 0; i < n; i++)
	{
		scanf("%s", person[count].name);
		scanf("%d/%d/%d", &person[count].year, &person[count].month, &person[count].day);
		
		if (isdate(person[count]))
		{
			count++;
		}
	}

	if (count == 0)
	{
		printf("0\n");
	}
	else
	{
		sort(person, person + count, cmp);
		printf("%d %s %s\n", count, person[0].name, person[count - 1].name);
	}
	
	return 0;
}
