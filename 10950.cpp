#include <stdio.h>

int main()
{
    int case_n;
    scanf("%d",&case_n);
    
    for(int i=0; i<case_n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n",a+b);
    }
}