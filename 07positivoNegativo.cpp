#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    int num = 0;
    cout << "Digite o N�mero: " << endl;
    cin >> num;
    if(num > 0)
    {
        cout << "O N�mero � Positivo!";
    } else if(num < 0){
        cout << "O N�mero � Negativo!";
    }else{
        cout << "O N�mero � 0!";
    }
    return 0;
}