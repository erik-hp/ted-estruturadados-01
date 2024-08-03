#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    int paisA = 80000, paisB = 200000, ano;

    while(paisA <= paisB)
    {  
        paisA += paisA * 0.03;
        paisB += paisB * 0.015;
        ano += 1;
    }

    cout << "O pais A ultrapassará passados : " << ano << " anos" << endl;

    return 0;
}