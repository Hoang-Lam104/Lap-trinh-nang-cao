string toLower (string s){
    for(int i=0; i<s.length(); i++){
        if('A'<=s[i] && s[i]<'Z') s[i] = s[i] + 'a' - 'A';
    }
    return s;
}