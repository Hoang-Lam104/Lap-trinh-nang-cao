#include<iostream>
#include <ctype.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    bool c=1;
    if(isdigit(str[0])) c=0;
    else if(str.length()>15 || str.length()<6) c=0;
    else{
        for(int i=0; i<str.length(); i++){
            if(isalnum(str[i])) continue;
            else{
                c=0;
                break;
            }
        }
    }
    if(c) cout<<"Valid username.";
    else cout<<"Invalid username.";
    return 0;
}