#include <iostream>

using namespace std;

int main() {
	int a[42] = { 0 };
	int num = 0;
	for (int i = 0; i < 10; i++)
	{
		int input;
		cin >> input;
		input %= 42;
		if (a[input] == 0) {
			a[input]++;
			num++;
		}
	}
	cout << num << endl;
}