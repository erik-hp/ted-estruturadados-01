#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    int n1 = 0, n2 = 0, soma=0;
    cout << "Digite o primeiro número: " << endl;
    cin >> n1;
    cout << "Digite o segundo número: " << endl;
    cin >> n2;
    soma = n1 + n2;
    cout << "SOMA: " << soma;
    return 0;
}