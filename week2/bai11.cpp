#include <iostream> 
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
    double a[1000], sum=0, pt=0;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum += a[i];
    }
    
    for(int i=n-1; i>=0; i--){
        pt += (a[i]-(sum/n))*(a[i]-(sum/n));
    }
    cout << fixed <<setprecision(2) << 1.0/n*pt;
    return 0;
}
