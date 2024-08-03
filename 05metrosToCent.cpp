#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    float m = 0.0, convert = 0.0;
    cout << "Digite a Unidade em Metros: " << endl;
    cin >> m;
    convert = m * 10 * 10;
    cout << "CENTÍMETROS: " << convert <<"cm";
    return 0;
}