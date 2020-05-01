#include <iostream>

using namespace std;

int d(int input) {
	int result = input;
	
	while (input != 0) {
		result += input % 10;
		input /= 10;
	}

	return result;
}

int main() {
	int arr[10001] = { 0 };

	for (int i = 1; i <= 10000; i++) {
		if (arr[i] != 0) continue;
		else {
			int loop = i;
			while (loop <= 10000) {
				loop = d(loop);
				if (arr[loop] == 1) {
					loop = 10001;
					continue;
				}
				if (loop <= 10000) arr[loop] = 1;
			}
		}
	}
	for (int i = 1; i <= 10000; i++) {
		if (arr[i] == 0) cout << i << endl;
	}
}