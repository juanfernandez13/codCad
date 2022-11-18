#include <iostream>
#include <algorithm>
#include <vector>  
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    int fila[N];
    for(int i = 0; i < N; i++){
        cin >> fila[i];
    }
    
    int M;
    cin >> M;
    
    int pessoasFora[M];
    for(int i = 0; i < M; i++){
        cin >> pessoasFora[i];
    }
    
    for(int i = 0; i < N; i++){
        int verificador = 0;
        for(int j = 0; j < M; j++){
            if(pessoasFora[j] == fila[i]){
                verificador++;
                break;
            }
        }
        if(verificador == 0)
            cout << fila[i] << " ";
        
    }
    return 0;
}
