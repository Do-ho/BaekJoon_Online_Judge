#include <iostream>

using namespace std;

int main()
{
	int result[10] = { 0 };
	int n, mul = 1;

	for (int i = 0; i < 3; i++)
	{
		cin >> n;
		mul *= n;
	}
	int gob = 1;

	while (mul / gob >= 1) {
		int a = (mul / gob) % 10;
		result[a]++;
		gob *= 10;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << result[i] << endl;
	}
}