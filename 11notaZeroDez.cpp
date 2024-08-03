#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    float nota = 0.0;

    cout << "Digite um valor válido de 0 à 10 para sua Nota: " << endl;
    cin >> nota;

    while (nota < 0.0 || nota > 10.0) {
        cout << "Valor Inválido. Tente novamente" << endl;
        cout << "Digite um valor válido de 0 à 10 para sua Nota: " << endl;
        cin >> nota;
    }

    cout << "Valor Válido!" << endl;

    return 0; 
}