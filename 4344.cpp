#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	for(int i=0; i<n; i++)
	{
		double student;
		int a[1000];
		int sum=0;
		scanf("%lf", &student);
		for(int j=0; j<student; j++)
		{
			scanf("%d", &a[j]);
			sum += a[j];
		}
		double avg = sum/student;
		double num = 0;
		for(int i=0; i<student; i++)
		{
			if(a[i]>avg) num++;
		}
		double per = num/student*100;
		printf("%.3lf%%\n",per);
	}
}