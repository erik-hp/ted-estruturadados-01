#include <iostream>
#include <locale.h>
#include <string>
#include <vector>
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    
    string nome, sexo, c;
    int idade; 
    float salario;
    vector<string> estadoC = {"s", "c", "v", "d"};
    bool validarC = false;

    cout << "Digite seu nome: " << endl;
    cin >> nome; 

    while(nome.length() < 3){
        cout << "Seu nome precisa de no Mínimo 3 Caracteres..." << endl;
        cout << "Digite seu nome: " << endl;
        cin >> nome; 
    }

    cout << "Digite sua idade: " << endl;
    cin >> idade;

    while(idade < 0 || idade > 150){
        cout << "Digite uma Idade Válida!" << endl;
        cout << "Digite sua idade novamente: " << endl;
        cin >> idade;
    }

    cout << "Seu Salário: " << endl;
    cin >> salario;

    while(salario < 0){
        cout << "Digite um saldo válido!" << endl;
        cout << "Digite seu Salário novamente: " << endl;
        cin >> salario;
    }

    cout << "Sexo: (m) ou (f)" << endl;
    cin >> sexo;

    while(sexo != "m" && sexo != "f"){
        cout << "Digite seu Sexo novamente: (m) ou (f)" << endl;
        cin >> sexo;
    }

    while(!validarC){
        cout << "Digite seu Estado Civil: " << endl;
        cout << "(s) Solteiro" << endl << "(c) Casado" << endl << "(v) Viuvo" << endl << "(d) Divorciado" << endl;
        cin >> c;
    
        for(int i = 0; i < estadoC.size(); i++){
            if(c == estadoC[i]){
                validarC = true;
                break;
            }   
        }

        if(!validarC){
            cout << "Digite um valor válido para Estado Civíl..." << endl;
        }
    }

    cout << "Perfil Concluído com Sucesso!";

    return 0;
}