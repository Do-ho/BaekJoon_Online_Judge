/*
    * Problem.
    * 지민이는 자신의 저택에서 MN개의 단위 정사각형으로 나누어져 있는 M*N 크기의 보드를 찾았다. 어떤 정사각형은 검은색으로 칠해져 있고, 나머지는 흰색으로 칠해져 있다. 지민이는 이 보드를 잘라서 8*8 크기의 체스판으로 만들려고 한다.
    * 체스판은 검은색과 흰색이 번갈아서 칠해져 있어야 한다. 구체적으로, 각 칸이 검은색과 흰색 중 하나로 색칠되어 있고, 변을 공유하는 두 개의 사각형은 다른 색으로 칠해져 있어야 한다. 따라서 이 정의를 따르면 체스판을 색칠하는 경우는 두 가지뿐이다. 하나는 맨 왼쪽 위 칸이 흰색인 경우, 하나는 검은색인 경우이다.
    * 보드가 체스판처럼 칠해져 있다는 보장이 없어서, 지민이는 8*8 크기의 체스판으로 잘라낸 후에 몇 개의 정사각형을 다시 칠해야겠다고 생각했다. 당연히 8*8 크기는 아무데서나 골라도 된다. 지민이가 다시 칠해야 하는 정사각형의 최소 개수를 구하는 프로그램을 작성하시오.

    * input
    * 첫째 줄에 N과 M이 주어진다. N과 M은 8보다 크거나 같고, 50보다 작거나 같은 자연수이다. 둘째 줄부터 N개의 줄에는 보드의 각 행의 상태가 주어진다. B는 검은색이며, W는 흰색이다.
    * ex)   8 8
    *       WBWBWBWB
    *       BWBWBWBW
    *       WBWBWBWB
    *       BWBBBWBW
    *       WBWBWBWB
    *       BWBWBWBW
    *       WBWBWBWB
    *       BWBWBWBW
    * ex)   10 13
    *       BBBBBBBBWBWBW
    *       BBBBBBBBBWBWB
    *       BBBBBBBBWBWBW
    *       BBBBBBBBBWBWB
    *       BBBBBBBBWBWBW
    *       BBBBBBBBBWBWB
    *       BBBBBBBBWBWBW
    *       BBBBBBBBBWBWB
    *       WWWWWWWWWWBWB
    *       WWWWWWWWWWBWB
    *
    * output
    * 첫째 줄에 지민이가 다시 칠해야 하는 정사각형 개수의 최솟값을 출력한다.
    * ex)   1
    * ex)   12
    *
*/

#include <iostream>

using namespace std;

int cal(char **arr, int n, int m) {
	int w_first = 0, b_first = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if ((i + j) % 2 == 0 && arr[i+n][j+m] == 'B') {
				w_first++;
			}
			else if ((i + j) % 2 == 0 && arr[i+n][j+m] == 'W') {
				b_first++;
			}
			else if ((i + j) % 2 == 1 && arr[i+n][j+m] == 'B') {
				b_first++;
			}
			else {
				w_first++;
			}
		}
	}
	if(w_first <= b_first) return w_first;
	else return b_first;
}

int main() {
	int M, N;

	int w_first=0, b_first=0;
	

	cin >> M >> N;
	
	int min = M * N;

	char** arr = new char*[M];
	for (int i = 0; i < M; i++) {
		arr[i] = new char[N];
	}

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];
		}
	}

	min = cal(arr, 0, 0);	
	int result = min;

	for (int i = 0; i < M - 7; i++) {
		for (int j = 0; j < N - 7; j++) {
			result = cal(arr, i, j);
			if(min > result) min = result;
		}
	}

	cout << min << endl;
}