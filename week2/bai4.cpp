#include <iostream> 
using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    int nc=-1;
    for(int i=0; i<=a; i++){
        if((2*i+(a-i)*4)==b){
           nc=i; 
           break; 
        } 
    }

    if(nc==-1) cout<<"invalid";
    else cout<<"chicken = "<<nc<<", dog = "<<a-nc;
    return 0;
}