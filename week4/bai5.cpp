bool isPrime (int number){
    if(number <2) return 0; 
    for(int i=2; i<=sqrt(number);i++){
        if(number%i==0) return 0;
    }
    return 1;
}