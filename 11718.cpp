#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    while(1)
    {
        getline(cin, str);
        if(str==" "||str.empty()||str=="\n")
            break;
        cout << str << endl;
    }
    return 0;
}