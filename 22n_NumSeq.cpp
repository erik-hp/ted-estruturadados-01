#include <iostream>
#include <locale.h>
using namespace std;

void printNumSeq(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    int n; 
    cout << "Digite o número: " << endl;
    cin >> n;
    printNumSeq(n);
    return 0;
}