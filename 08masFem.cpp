#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil!");
    string gen;
    cout << "Digite (M) para Masculino" << endl << "Digite (F) para Feminino" << endl;
    cin >> gen;
    if(gen == "M" || gen == "m"){
        cout << "Masculino!";
    }else if(gen == "F" || gen == "f"){
        cout << "Feminino!";
    }else{
        cout << "Comando Inválido!";
    }
    return 0;
}