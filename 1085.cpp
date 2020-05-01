/*
    * Problem.
    * 한수는 지금 (x, y)에 있다. 직사각형의 왼쪽 아래 꼭짓점은 (0, 0)에 있고, 오른쪽 위 꼭짓점은 (w, h)에 있다. 직사각형의 경계선까지 가는 거리의 최솟값을 구하는 프로그램을 작성하시오.    *
    *
    * input
    * 첫째 줄에 x y w h가 주어진다. w와 h는 1,000보다 작거나 같은 자연수이고, x는 1보다 크거나 같고, w-1보다 작거나 같은 자연수이고, y는 1보다 크거나 같고, h-1보다 작거나 같은 자연수이다.
    * ex)   6 2 10 3
    *
    * output
    * 첫째 줄에 문제의 정답을 출력한다.
    * ex)   1
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int x, y, w, h;
    int arr[4];

    cin >> x >> y >> w >> h;

    arr[0] = x;
    arr[1] = y;
    arr[2] = w-x;
    arr[3] = h-y;

    int minimum=1001;

    for(int i=0; i<4; i++) {
        if(minimum>=arr[i]) minimum = arr[i];
    }
    cout << minimum << endl;
}