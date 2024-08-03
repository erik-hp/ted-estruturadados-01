#include <iostream>
#include <locale.h>

using namespace std;

void positivoNegativo(int n){
    if(n > 0){
        cout << "P";
    }else if(n <= 0 ){
        cout << "N";
    }
}

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    int n;
    cout << "Digite um número: " << endl;
    cin >> n;
    cout << "O número é: "; 
    positivoNegativo(n);
}