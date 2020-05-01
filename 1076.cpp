/*
    * Problem.
    * 전자 제품에는 저항이 들어간다. 저항은 색 3개를 이용해서 그 저항이 몇 옴인지 나타낸다.
    * 처음 색 2개는 저항의 값이고, 마지막 색은 곱해야 하는 값이다.
    * 저항의 값은 다음 표를 이용해서 구한다.
    *
    * black     0       1
    * brown     1       10
    * red       2       100
    * orange    3       1000
    * yellow    4       10000
    * green     5       100000
    * blue      6       1000000
    * violet    7       10000000
    * grey      8       100000000
    * white     9       1000000000
    *
    * 예를 들어, 저항에 색이 yellow, violet, red였다면 저항의 값은 4,700이 된다.
    *
    * input
    * 첫째 줄에 첫 번째 색, 둘째 줄에 두 번째 색, 셋째 줄에 세 번째 색이 주어진다. 색은 모두 위의 표에 쓰여 있는 색만 주어진다.
    * ex)   yellow
    *       violet
    *       red
    *
    * output
    * 입력으로 주어진 저항의 저항값을 계산하여 첫째 줄에 출력한다.
    * ex)   4700
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	const char* color_list[10] = {
		"black",
		"brown",
		"red",
		"orange",
		"yellow",
		"green",
		"blue",
		"violet",
		"grey",
		"white"
	};

	long long result = 0;
	for (int i = 0; i < 3; i++) {
		string input;
		cin >> input;
		if (i == 0) {
			for (int j = 0; j < 10; j++) {
				if (input == color_list[j]) {
					result += j * 10;
					break;
				}
			}
		}
		else if(i == 1) {
			for (int j = 0; j < 10; j++) {
				if (input == color_list[j]) {
					result += j;
					break;
				}
			}
		}
		else {
			for (int j = 0; j < 10; j++) {
				if (input == color_list[j]) {
					if (j != 0) result *= pow(10, j);
					break;
				}
			}
		}
	}
	cout << result;
}