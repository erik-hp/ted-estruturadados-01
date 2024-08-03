#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    int num = 0;
    cout << "Digite o Número: " << endl;
    cin >> num;
    if(num > 0)
    {
        cout << "O Número é Positivo!";
    } else if(num < 0){
        cout << "O Número é Negativo!";
    }else{
        cout << "O Número é 0!";
    }
    return 0;
}