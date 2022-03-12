#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int main(){
    int n, j;
    cin>>n;
    double a[n], k;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cin>>k;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]>a[j]){
                double temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        if(a[i] <= k) cout<<fixed<<setprecision(2)<<a[i]<<" ";
        
    }
    cout<<fixed<<setprecision(2)<<k<<" ";
    for(int i=0; i<n; i++){
        if(a[i] > k) cout<<fixed<<setprecision(2)<<a[i]<<" ";
        
    }
    return 0;
}