#include <stdio.h>

int main()
{
	int num, cicle=0;
	scanf("%d", &num);
	int new_num=num;
	for(;;)
	{
		new_num = (new_num%10)*10 + ((new_num%10) + (new_num/10))%10;
		cicle++;
		if(num == new_num) break;
	}
	printf("%d", cicle);
}