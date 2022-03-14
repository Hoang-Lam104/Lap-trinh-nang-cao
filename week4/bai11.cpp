string pigLatin(string word){
    if(word[0]=='a' ||word[0]=='e' ||word[0]=='o' ||word[0]=='i' ||word[0]=='u' ) word = word + "way";
    else{
        char temp = word[0];
        word.erase(word.begin());
        word = word + temp + "ay";
    }
    return word;
}