#include <iostream>
#include <vector>
#include <iomanip>
#include <locale.h>

using namespace std;

int main(){

    setlocale(LC_ALL,"Portuguese_Brazil");
    cout << fixed << setprecision(2);

    const int SIZE = 4;
    double media, soma;
    vector<double> notas(SIZE);

    cout << "Digite quatro notas: " << endl;
    for(int i = 0; i < SIZE; i++){
        cin >> notas[i];
    }

    for(int i = 0; i < SIZE; i++){
        soma += notas[i];
    }

    media = soma / SIZE;
    cout << "NOTAS: ";
    for(int i = 0; i < SIZE; i++){
        cout << notas[i] << " ";
    }
    cout << endl;
    cout << "MÉDIA: " << media << endl;
     
    return 0;
}