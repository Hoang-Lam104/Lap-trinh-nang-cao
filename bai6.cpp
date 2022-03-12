#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int c=0;
    s=" "+s;
    for (int i = 0; i < s.length() - 1; i++){
        if (s[i-1] == ' ' && s[i] != ' '){
            c++;
        }
    }
    cout<<c;
    return 0;
}