#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    int anterior, fibonacci, proximo;
    anterior = 1; fibonacci = 1;
    
    for(int i = 1; i<x; i++){
        proximo = fibonacci+anterior;
        anterior = fibonacci;
        fibonacci = proximo;
    }
    
    cout << fibonacci;
    
    return 0;
}
