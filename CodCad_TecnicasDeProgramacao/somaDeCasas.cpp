#include <iostream>
using namespace std;

int buscaBinaria (int v[],int x, int n) {
    int e = -1, d = n;
    while (e < d-1) {
        int m = (e + d)/2;
        if (v[m] < x) e = m;
        else d = m;
    }
    return d;
}

int main() {

    int size;
    cin >> size;
    int casas[size];
    for(int i = 0; i < size; i++)
        cin >> casas[i];

    int soma;
    cin >> soma;

    for(int i = size-1; i >=0; i--){
        int busca = soma - casas[i];
        if(busca <= 0)
            continue;
        if(casas[buscaBinaria(casas,busca,size)] == busca){
            cout << busca << " " << casas[i];
            break;
        }
    }

}