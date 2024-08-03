#include <iostream>
#include <vector>
#include <locale.h>
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");

    const int SIZE = 5;
    vector<int> num(SIZE); 
    
    cout << "Digite " << SIZE << " Números:" << endl;

    for(int i = 0; i < SIZE; i++){
        cin >> num[i];
    }

    cout << "Você digitou: ";

    for(int i = 0; i < SIZE; i++){
        cout << num[i] << " ";
    }
    cout << endl;

    return 0;
}