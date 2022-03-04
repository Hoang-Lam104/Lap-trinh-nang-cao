#include <iostream> 
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
    double a[1000];
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=n-1; i>=0; i--){
        cout << fixed <<setprecision(2) << a[i] << " ";
    }
    return 0;
}
