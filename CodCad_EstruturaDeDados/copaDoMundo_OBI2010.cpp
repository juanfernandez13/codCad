#include <iostream>
using namespace std;

int main()
{   
    string timesOitavas[16] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P"};
    int golsOitavas[16];
    for(int i = 0; i < 16; i++){
        cin >> golsOitavas[i];
    }
    string timesQuartas[8];
    int golsQuartas[8];
    
    for(int i = 0; i < 8; i++){
        timesQuartas[i] = golsOitavas[(i*2)] - golsOitavas[(i*2)+1] < 0? timesOitavas[(i*2)+1] : timesOitavas[(i*2)];
        cin >> golsQuartas[i];
    }
    
    string timesSemi[4];
    int golsSemi[4];
    
    for(int i = 0; i < 4; i++){
        timesSemi[i] = golsQuartas[(i*2)] - golsQuartas[(i*2)+1] < 0? timesQuartas[(i*2)+1] : timesQuartas[(i*2)];
        cin >> golsSemi[i];
    }
    
    string timesFinal[2];
    int golsFinal[2];
    for(int i = 0; i < 2; i++){
        timesFinal[i] = golsSemi[(i*2)] - golsSemi[(i*2)+1] < 0? timesSemi[(i*2)+1] : timesSemi[(i*2)];
        cin >> golsFinal[i];
    }

    if(golsFinal[0] - golsFinal[1] < 0){
        cout << timesFinal[1];
        return 0;
    }
    
    cout << timesFinal[0];
    return 0;
}
