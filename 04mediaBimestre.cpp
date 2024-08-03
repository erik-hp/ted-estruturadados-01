#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    float n1 = 0.0, n2 = 0.0, n3 = 0.0, n4 = 0.0, media=0.0;
    cout << "Digite a Primeira Nota: " << endl;
    cin >> n1;
    cout << "Digite a Segunda Nota: " << endl;
    cin >> n2;
    cout << "Digite a Terceira Nota: " << endl;
    cin >> n3;
    cout << "Digite a Quarta Nota: " << endl;
    cin >> n4;
    media = (n1 + n2 + n3 + n4) / 4;
    cout << "MÉDIA: " << media;
    return 0;
}