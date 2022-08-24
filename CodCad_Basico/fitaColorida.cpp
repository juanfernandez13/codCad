#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int fita[N];
    int zeros[N];
    int quantZero = 0;
    for(int i = 0; i<N;i++){
        cin >> fita[i];
        if(fita[i] == 0){
            zeros[quantZero] = i;
            quantZero++;
        }
    }
    
    if(quantZero > 0){
        
        
        for(int i = zeros[0]; i>0;i--){
        if(i>9) cout << "9 ";
        else cout <<i << " ";
    }
    
        
        int observar = 1;
        
        while(observar < quantZero){
            
            int intervalo = (zeros[observar] - zeros[observar-1] - 1);
            int media = (zeros[observar] - zeros[observar-1] - 1)/2;
            
            if(media < 1 && intervalo != 0){
            cout << "0 " << 1 << " ";
            }
            
            else{
                cout << "0 ";
                for(int i= 1; i<=media; i++){
                    if(i>9) cout <<"9 ";
                    else cout << i << " ";
                }    
                if(intervalo%2 == 1 && intervalo != 0){
                    if(media+1 > 8) cout <<"9 ";
                    else cout << media+1 << " ";
                }
                for(int i = media; i>=1; i--){
                    if(i>9) cout <<"9 ";
                    else cout << i << " ";
                }
                    
                
                
            }
            
            observar++;
            
        }
        
        
    
    for(int i = 0; i<N-zeros[quantZero-1];i++){
        if(i>9) cout << "9 ";
        else cout <<i << " ";
    }
    
        
        
    }
    

    return 0;
}