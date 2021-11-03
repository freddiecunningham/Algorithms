#include <stdio.h>

int gcd(int  a, int b)
{
	int t;

	while (a > 0)
	{
		if (a < b)
		{
			t = a; a = b; b = t;
		}
		a = a - b;	
	}

	return a;
}


int main(int argc, char *argv[])
{
	int x, y;
	while (scanf("%d %d", &x, &y) != EOF)
	{
		if (x>0 && y>0)
		{
			printf("%d %d %d\n", x, y, gcd(x, y));
		}
	}

	return 0;
}