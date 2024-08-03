#include <iostream>
#include <vector>
#include <locale.h>
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");

    const int SIZE = 20;
    vector<int> num(SIZE);
    vector<int> par;
    vector<int> impar;

    cout << "Digite 20 números:" << endl;
    for(int i = 0; i < SIZE; i++){
        cin >> num[i];
    }

    for(int i = 0; i < SIZE; i++){
        if(num[i] % 2 == 0){
            par.push_back(num[i]);
        }else{
            impar.push_back(num[i]);
        }
    }

    for(int i = 0; i < par.size(); i++){
        cout << "PARES: " << par[i] << " ";
    }
    
    cout << endl;

    for(int i = 0; i < impar.size(); i++){
        cout << "ÍMPARES: " << impar[i] << " ";
    }
}