#include <iostream>
#include <locale.h>
#include <vector>
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    vector<string> vogal = {"a", "e", "i","o","u"};
    string letra;
    bool isLeter = false;
    cout << "Digite a Letra:" << endl;
    cin >> letra;
    for(int i = 0; i < vogal.size(); i++)
    {
        if(letra == vogal[i])
        {
            isLeter = true;
            break;
        }
    }

    if(isLeter)
    {
        cout << "Vogal!" << endl;
    }else
    {
        cout << "Consoante!";
    }
    return 0;
}
