#include <iostream> 
#include <iomanip>
#include <math.h>
using namespace std;
double gt(int n){
    if(n==0) return 1;
    return (double) n*gt(n-1);
}
double lt(int a, int b){
    if(b==0) return 1;
    return (double) a*lt(a, b-1);
}
int main(){
    double sum=1, old=0;
    int n;
    cin>>n;
    if(n==0) cout<<fixed<<setprecision(4)<<sum;
    else{
        int i=1;
        while(sum-old>0.001){
            old = sum;
            sum += 1.0*lt(n,i)/gt(i);
            i++;
        }
        cout<<fixed<<setprecision(4)<<sum;
    }
    return 0;
}
