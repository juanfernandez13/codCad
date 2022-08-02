#include <iostream>
using namespace std;
int main(){
	int dias,diaDoMilhao;
	cin >> dias;
	int pessoaspordia[dias];
	diaDoMilhao = 0;
	for(int i = 0; i<dias; i++){
		cin >> pessoaspordia[i];
		diaDoMilhao += pessoaspordia[i];
		
		if(diaDoMilhao >= 1000000){
			cout << i+1;
			return 0;
		}
	}
    
	return 0;
}