#include <iostream> 
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
    long long a;
    cin>>a;
    int c=0;
    long long b=abs(a);
    do{
        c++;
        b /=10;
    }while(b>0);
    cout<<c;
    return 0;
}
