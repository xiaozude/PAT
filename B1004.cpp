#include <cstdio>
#include <algorithm>

using namespace std;

struct Student
{
	char name[11];
	char id[11];
	int score;
};

bool cmp(Student stu1, Student stu2)
{
	return stu1.score < stu2.score;
}

int main()
{
	int n;
	scanf("%d", &n);

	Student* student = new Student[n];

	for (int i = 0; i < n; i++)
	{
		scanf("%s %s %d", student[i].name, student[i].id, &student[i].score);
	}

	sort(student, student + n, cmp);

	printf("%s %s\n", student[n - 1].name, student[n - 1].id);
	printf("%s %s\n", student[0].name, student[0].id);
	
	delete[] student;

	return 0;
}
