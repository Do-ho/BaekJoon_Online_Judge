#include <iostream>
#include <array>

using namespace std;

int main()
{
	int max, index;
	int* result = new int[9];
	for (int i = 0; i < 9; i++)
	{
		cin >> result[i];
	}
	max = result[0];
	index = 1;
	for (int i = 1; i < 9; i++)
	{
		if (max <= result[i]) {
			max = result[i];
			index = i+1;
		}
	}
	cout << max << endl << index << endl;
}