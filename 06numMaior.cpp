#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    int n1=0, n2=0;
    cout << "Digite o Primeiro Número: " << endl;
    cin >> n1;
    cout << "Digite o Segundo Número: " << endl;
    cin >> n2;

    if(n1 > n2)
    {
        cout << "O número maior é: " << n1;
    } else{
        cout << "O número maior é: " << n2;
    }
    return 0;
}