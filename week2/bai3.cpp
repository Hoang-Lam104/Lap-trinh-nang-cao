#include <iostream> 
#include <math.h>
using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    for(int i=a; i<=b; i++){
        int sqr = sqrt(i);
        if(sqr*sqr == i) cout<<i<<" ";
    }
    return 0;
}