#include <stdio.h>

int main()
{
	int month, day,sum=0;
	int year[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	scanf("%d %d", &month, &day);

	for (int i = 1; i < month; i++)
	{
		sum += year[i-1];
	}
	sum += day;
	int n = sum % 7;
	switch (n)
	{
	case 0:
		printf("SUN\n");
		break;
	case 1:
		printf("MON\n");
		break;
	case 2:
		printf("TUE\n");
		break;
	case 3:
		printf("WED\n");
		break;
	case 4:
		printf("THU\n");
		break;
	case 5:
		printf("FRI\n");
		break;
	default:
		printf("SAT\n");
		break;
	}
}