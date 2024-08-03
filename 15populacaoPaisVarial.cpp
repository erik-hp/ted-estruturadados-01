#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    int ano = 0;
    float taxaCrescimentoA, taxaCrescimentoB, paisA, paisB;
    char repetir;
    
    do{
        cout << "Digite a População do Pais A: " << endl;
        cin >> paisA;

        while(paisA < 0){
            cout << "Digite uma População Válida para o Pais A: " << endl;
            cout << "Digite a População do Pais A novamente: " << endl;
            cin >> paisA;
        }

        cout << "Digite a Taxa de Crescimento do Pais A: " << endl;
        cin >> taxaCrescimentoA;

        while (taxaCrescimentoA <= 0) {
                cout << "Digite uma Taxa de Crescimento Válida para o País A: ";
                cin >> taxaCrescimentoA;
            }

        cout << "Digite a População do Pais B: " << endl;
        cin >> paisB;

        while (paisB <= 0) {
            cout << "Digite uma População Válida para o País B: ";
            cin >> paisB;
        }

        cout << "Digite a Taxa de Crescimento do Pais B: " << endl;
        cin >> taxaCrescimentoB;

        while (taxaCrescimentoB <= 0) {
            cout << "Digite uma Taxa de Crescimento Válida para o País B: ";
            cin >> taxaCrescimentoB;
        }

        while(paisA <= paisB)
        {  
            paisA += paisA * (taxaCrescimentoA / 100);
            paisB += paisB * (taxaCrescimentoB / 100);
            ano++;
        }

        cout << "O pais A ultrapassará passados : " << ano << " anos" << endl;
        cout << "Deseja repetir a operação? (s/n): " << endl;
        cin >> repetir;

    }while(repetir == 's' || repetir == 'S');
    
    return 0;
}