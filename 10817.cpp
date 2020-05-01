#include <stdio.h>

void swap(int &a, int &b);

int main()
{
	int a, b, c;
	scanf("%d %d %d",&a, &b, &c);
	
	if(a<b) swap(a,b);
	if(a<c) swap(a,c);
	if(b<c) swap(b,c);
	printf("%d",b);
}

void swap(int &a, int &b)
{
	int c;
	c = a;
	a = b;
	b = c;
}