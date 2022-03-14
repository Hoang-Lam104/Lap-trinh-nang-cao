#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

const string WORD_LIST[] = {"angle", "ant", "apple", "arch", "arm", "army"};
const int WORD_COUNT = sizeof(WORD_LIST) / sizeof(string);

string chooseWord(){
    int random = rand() % WORD_COUNT;
    return WORD_LIST[random];
}

string update(string guessedWord, string secretWord, char guess){
    for (int i = secretWord.length() - 1; i >= 0; i--){
        if (secretWord[i] == guess) {
            guessedWord[i] = guess;
        }
    }
    return guessedWord;
}

bool contain(string secretWord, char guess){
    for(int i=0; i<secretWord.length(); i++){
        if(secretWord[i] == guess) return 1;
    } 
    return 0;
}

int main(){
    int wrongGuessCout=0;
    char guess;
    string secretWord = chooseWord();
    string guessedWord = string(secretWord.length(), '-');
    cout<<"Welcome to Hangman Game"<<endl;
    
    do{
    	cout<<"Your guess:";
        cin>>guess;
        if(contain(secretWord, guess)){
            guessedWord = update(guessedWord, secretWord, guess);
        }
        else wrongGuessCout++;
        cout<<guessedWord<<endl;
    }while(wrongGuessCout < 7 && guessedWord != secretWord);

    if (wrongGuessCout < 7) cout << "Congratulations! You win!";
    else cout << "You lost. The correct word is " << secretWord;
    return 0;
}
