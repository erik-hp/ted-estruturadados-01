#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    int num = 0;
    cout << "Digite o número: " << "\n";
    cin >> num;
    cout << "O número informado foi: " << num;
    return 0; 
}