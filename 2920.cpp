#include <iostream>
#include <array>

using namespace std;

int main()
{
	int index;
	int* result = new int[8];
	bool ascending = true;
	bool descending = true;
	for (int i = 0; i < 8; i++)
	{
		cin >> result[i];
		if (i != 0) {
			if (result[i - 1] != result[i] - 1) ascending = false;
			if (result[i - 1] != result[i] + 1) descending = false;
		}
	}
	
	if (ascending) cout << "ascending" << endl;
	else if (descending) cout << "descending" << endl;
	else cout << "mixed" << endl;
	
}