/*
    * Problem.
    * 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
    * 
    * input
    * 첫째 줄에 A와 B가 주어진다. (0 < A, B < 10)
    * ex) 1 2
    *
    * output
    * 첫째 줄에 A+B를 출력한다.
    * ex) 3
*/

#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d",&a, &b);
    printf("%d",a+b);
}