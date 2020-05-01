#include <iostream>
using namespace std;

int main() {
    int menu[5], hamburger=2000, drink=2000;
    for(int i=0; i<5; i++) {
        cin >> menu[i];
        if(i<3) {
            if(hamburger>menu[i]) hamburger = menu[i];
        }
        else {
            if(drink>menu[i]) drink = menu[i];
        }
    }
    cout << hamburger + drink - 50;
}