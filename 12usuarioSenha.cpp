#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    string nome; 
    string senha;
    cout << "Digite seu nome: " << endl;
    cin >> nome;
    cout << "Digite sua senha: " << endl;
    cin >> senha;

    while(nome == senha){
        cout << "Valor Inválido. Sua senha deve ser DIFERENTE de seu nome. Tente Novamente!" << endl;
        cout << "Digite seu nome: " << endl;
        cin >> nome;
        cout << "Digite sua senha: " << endl;
        cin >> senha;
    }

    cout << "Concluido com Sucesso!"; 

    return 0;
}