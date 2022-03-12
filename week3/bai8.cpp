#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int i=0;
    bool c=1;
    for (i; i < s.length()-4; i++){
       if(s.substr(i,4) == "Zues"){
           i +=4;
           c=0;
           break;
       } 
       cout<<s[i];
    }
    if(c==0) cout<<"Zeus";
    for (i; i < s.length(); i++){
        cout<<s[i];
    }
    return 0;
}