#include <iostream>
#include <array>

using namespace std;

int main()
{
	int n, min, max;
	cin >> n;
	int* result = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> result[i];
	}
	min = result[0];
	max = result[0];
	for (int i = 1; i < n; i++)
	{
		if (min >= result[i]) min = result[i];
		if (max <= result[i]) max = result[i];
	}
	cout << min << " " << max << endl;
}