#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    int n1=0, n2=0;
    cout << "Digite o Primeiro N�mero: " << endl;
    cin >> n1;
    cout << "Digite o Segundo N�mero: " << endl;
    cin >> n2;

    if(n1 > n2)
    {
        cout << "O n�mero maior �: " << n1;
    } else{
        cout << "O n�mero maior �: " << n2;
    }
    return 0;
}