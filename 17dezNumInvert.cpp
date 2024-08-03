#include <iostream>
#include <vector>
#include <algorithm>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");

    const int SIZE = 10;
    vector<int> num(SIZE); 
    
    cout << "Digite " << SIZE << " Números:" << endl;

    for(int i = 0; i < SIZE; i++){  
        cin >> num[i];
    }

    reverse(num.begin(), num.end());

    for(int i : num){
        cout << i << " ";
    }

    cout << endl;


    return 0;
}