#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    if((a-b)<c && (a+b)>c){
        float p = 1.0*(a+b+c)/2;
        cout<<fixed<<setprecision(2)<<sqrt(p*(p-a)*(p-b)*(p-c));
    }
    else cout<<"invalid";
    return 0;
}