#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n], b[n];
    bool c=1;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n/2; i++){
        if(a[i] != a[n-1-i]){ 
            c=0;
            break;
        }
    }
    if(c==0) cout<<"Asymmetric array.";
    else cout<<"Symmetric array.";
    return 0;
}