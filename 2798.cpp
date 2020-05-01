#include <iostream>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	int* arr = new int[N];
	int max = 0;
	
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < N; i++) {
		for (int j = i+1; j < N; j++) {
			for (int k = j+1; k < N; k++) {
				int sum = arr[i] + arr[j] + arr[k];
				if (sum == M) {
					cout << M << endl;
					return 0;
				}
				if (sum <= M && sum >= max) max = sum;
			}
		}
	}
	cout << max << endl;
}