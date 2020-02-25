#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
	char A[101] = { '\0' };
	char B[101] = { '\0' };
	char C[101] = { '\0' };
	
	scanf("%s %s", A, B);

	int len_A = strlen(A);
	int len_B = strlen(B);
	int len = len_A > len_B ? len_A : len_B;

	reverse(A, A + len_A);
	reverse(B, B + len_B);

	for (int i = 0; i < len; i++)
	{
		int a = i < len_A ? A[i] - '0' : 0;
		int b = i < len_B ? B[i] - '0' : 0;
		
		if (i % 2 == 0)
		{
			int c = (a + b) % 13;
			
			if (c == 10) C[i] = 'J';
			else if (c == 11) C[i] = 'Q';
			else if (c == 12) C[i] = 'K';
			else C[i] = c + '0';
		}
		else
		{
			int c = b - a;
			if (c < 0) c += 10;

			C[i] = c + '0';
		}
	}

	reverse(C, C + len);

	printf("%s\n", C);

	return 0;
}
