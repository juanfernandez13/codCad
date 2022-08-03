#include <iostream>

using namespace std;

int main()
{
    int lenght;
    cin >> lenght;
    int nums[lenght], aux[10];
    
    for (int i = 0; i<lenght; i++) {
        cin >> nums[i];
    }
    for (int i = 0; i<10; i++) {
        aux[i] = 0;
    }
    
    for(int i = 0; i<lenght; i++){
        int resto = 10;
        int divisor = 1;
        while(nums[i]>=divisor){
            int valor = (nums[i]%resto)/divisor;
            
            aux[valor]++;
            
            resto *= 10;
            divisor *=10;
        }
        
    }
    
    for(int i = 0; i<10; i++){
        cout << i << " - " << aux[i] << "\n";
        
    }
    
    return 0;
}
