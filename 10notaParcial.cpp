#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    float n1 = 0.0, n2 = 0.0, media = 0.0;
    cout << "Digite a Primeira Nota: " << endl;
    cin >> n1;
    cout << "Digite a Segunda Nota: " << endl;
    cin >> n2;
    media = (n1 + n2) / 2;
    cout << "MÉDIA: " << media << endl;
    
    if(media == 10)
    {
        cout << "Aprovado com distinção";
    }
    else if (media > 7 && media <= 10)
    {
        cout << "Aprovado!";
    }
    else if(media > 0 && media < 7)
    {
        cout << "Reprovado!";
    }

    return 0;
}