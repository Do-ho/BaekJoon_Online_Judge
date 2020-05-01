#include <stdio.h>

int main()
{
	int n;
	double a[10000],max=0;
	double sum=0;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%lf",&a[i]);
		if(max<a[i]) max = a[i];
	}
	for(int i=0; i<n; i++)
	{
		sum = sum + (a[i]/max*100.0);
	}
	printf("%.2lf",sum/(double)n);
}