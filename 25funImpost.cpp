#include <iostream>
#include <locale.h>

using namespace std;

void somaImposto(double taxaImposto, double& custo){
    double imposto = (taxaImposto / 100) * custo;
    custo += imposto; 
}

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    double taxaImposto, custo;

    cout << "Digite a taxa de Imposto: (em porcentagem: ) " << endl;
    cin >> taxaImposto;
    cout << "Digite o preço do produto: " << endl;
    cin >> custo;
    cout << endl;

    somaImposto(taxaImposto, custo);
    cout << "O preço do produto com Imposto: " << custo << endl;

     
    return 0;
}