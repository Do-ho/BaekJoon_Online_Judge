#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=0; i<2*n; i++) {
        for(int j=0; j<n; j++) {
            if((i+j)%2==0) cout << '*';
            else cout << ' ';
        }
        cout << endl;
    }
}