#include <iostream>
#include <vector>
#include <cctype>
#include <locale.h>

using namespace std;

int main(){

    setlocale(LC_ALL,"Portuguese_Brazil");
    const int SIZE = 10;
    int countConso = 0;
    vector<char> carac(SIZE);

    cout << "Digite 10 Caracteres: " << endl;
    for(int i = 0; i < SIZE; i++){
        cin >> carac[i];
    }

    cout << endl;
    
    for(char c : carac){
        char lowerC = tolower(c);
        if (isalpha(lowerC) && lowerC != 'a' && lowerC != 'e' && lowerC != 'i' && lowerC != 'o' && lowerC != 'u') 
        {
            cout << c << " é uma consoante." << endl;
            ++countConso;
        } else {
            cout << c << " não é uma consoante." << endl;
        }
    }

    cout << "Existem: " << countConso << " Consoantes";

    return 0;
}