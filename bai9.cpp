#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int main(){
    string str;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++){
        
        if (str[i] == str[i + 1] && str[i] == ' '){
            continue;
        }
        else cout<<str[i];
    }
    return 0;
}