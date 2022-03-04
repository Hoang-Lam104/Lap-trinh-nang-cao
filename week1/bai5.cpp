#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float a;
    cin>>a;
    cout << fixed<< setprecision(2)<< 1.8*a + 32;
    return 0;
}