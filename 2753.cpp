#include <stdio.h>

int cal(int n) {
	if (n % 4 == 0) {
		if (n % 400 == 0) {
			return 1;
		}
		if (n % 100 == 0) {
			return 0;
		}
		return 1;
	}
	return 0;
}

int main()
{
	int a;
	scanf("%d", &a);
	printf("%d", cal(a));
}