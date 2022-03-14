void readArray(int a[], int n){
    for(int i=0; i<n; i++){
        cin>>a[i];
    } 
}

bool compareArray(int a1[], int a2[], int n){
    for(int i=0; i<n; i++){
        if(a1[i]!=a2[i]) return 0;
    }
    return 1;
}