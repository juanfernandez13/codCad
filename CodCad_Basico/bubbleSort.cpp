#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    int arr[x];
    
    for(int i = 0; i<x; i++){
        cin >> arr[i];
    }
    
    for(int i = 0; i<x; i++){
        for(int j = 0; j<x; j++){
            if(arr[i]<arr[j]){
                int aux = arr[j];
                arr[j] = arr[i];
                arr[i] = aux;
            }
        }
    }
    
    for(int i = 0; i<x; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
