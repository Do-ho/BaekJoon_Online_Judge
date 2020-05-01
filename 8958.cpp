#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;
	cin.ignore(256, '\n');
	for (int i = 0; i < n; i++)
	{
		string test;
		int sum = 0;
		int value = 1;
		getline(cin, test);
		for (int j = 0; j < test.length(); j++)
		{
			if (test[j] == 'O') sum += value++;
			if (test[j] == 'X') value = 1;
		}
		cout << sum << endl;
	}
}