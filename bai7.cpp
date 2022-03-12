#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int a=0, b=0, c=0;
    for (int i = 0; i < s.length(); i++){
        if ('a' <= s[i] && s[i] <= 'z' || 'A' <= s[i] && s[i] <= 'Z'){
            a++;
        }
        else if('0' <= s[i] && s[i] <= '9'){
            b++;
        }
        else c++;
    }
    cout<<a<<" "<<b<<" "<<c<<" ";
    return 0;
}