#include <iostream>

using namespace std;

int main()
{
    int moedas[6] = {1,5,10,25,50,100}, valor, quantidadeMoedas = 0;
    cin >> valor;
    
    for(int i = 5; i >= 0 ; i--){
        if(valor <= 0)
            break;
        quantidadeMoedas += valor/moedas[i];
        valor = valor%moedas[i];
    }
    cout << quantidadeMoedas;
    return 0;
}