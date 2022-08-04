#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int matriz[N][N];
    int somaQuadrado = 0;
    for(int i = 0; i<N; i++){
        for(int j = 0; j < N; j++){
           cin >> matriz[i][j];
        }
        somaQuadrado += matriz[0][i];
    }
    
    for(int i = 0; i<N;i++){
        int verificarLinhas = 0;
        int verificarColunas = 0;
        int verificarDiagonalP = 0;
        int verificarDiagonalS = 0;
        for(int j = 0; j < N; j++){
            verificarLinhas += matriz[i][j];
            verificarColunas += matriz[j][i];
            verificarDiagonalP += matriz[j][j];
            verificarDiagonalS += matriz[j][N-1-j];
        }
        
        if(somaQuadrado != verificarLinhas || somaQuadrado != verificarColunas || somaQuadrado != verificarDiagonalP || somaQuadrado != verificarDiagonalS ){
            cout << -1;
            return -1;
        }
    }
    cout << somaQuadrado;
    return 0;
}
