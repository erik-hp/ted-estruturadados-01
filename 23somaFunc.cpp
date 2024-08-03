#include <iostream>
#include <locale.h>

using namespace std;

void somaFun(int n1, int n2, int n3){
    int soma = n1 + n2 + n3;
    cout << soma;
}

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    int n1,n2,n3;
    cout << "Digite 3 números: " << endl;
    cin >> n1;
    cout << endl;
    cin >> n2;
    cout << endl;
    cin >> n3;
    cout << endl;
    cout << "SOMA: ";
    somaFun(n1,n2,n3);
    return 0;
}