#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n], b[n];
    bool c=1;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    for(int i=0; i<n; i++){
        if(a[i] != b[i]){
            c=0;
            break;
        }
    }
    if(c==1) cout<<"YES";
    else cout<<"NO";
    return 0;
}