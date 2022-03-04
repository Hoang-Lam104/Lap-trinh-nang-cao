#include <iostream> 
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
    double a[1000], b[1000];
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    double sum=0;
    for(int i=0; i<n; i++){
        sum += a[i]*b[i];
    }
    cout << fixed <<setprecision(2) << sum;
    return 0;
}
