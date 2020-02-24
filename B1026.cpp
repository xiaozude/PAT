#include <cstdio>

int main()
{
	int c1, c2;
	scanf("%d %d", &c1, &c2);
	
	int c = c2 - c1;
	int t = c % 100 < 50 ? c / 100 : c / 100 + 1;
	
	int hh = t / 3600;
	int mm = t / 60 % 60;
	int ss = t % 60;
	
	printf("%02d:%02d:%02d\n", hh, mm, ss);
	
	return 0;
}
