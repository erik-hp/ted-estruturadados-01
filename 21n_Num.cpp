#include <iostream>
#include <locale.h>

using namespace std;

void printNum(int n){
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= i; j++){
            cout << i << " ";
        }
        cout << endl; 
    }
}

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    int n;
    cout << "Digite o número: " << endl;
    cin >> n;
    printNum(n);
    return 0;
}
