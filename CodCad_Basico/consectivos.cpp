#include <iostream>
using namespace std;
int main(){
	int N;
	cin >> N;
	int valores[N];
	int sequenciaMax = 1;
	int seq = 1;
	
	for(int i = 0; i<N ; i++){
		cin >> valores[i];
	}
	
	for(int i = 1; i<N ; i++){
		if(valores[i] == valores[i-1]){
			seq++;
		}
		else{
		    seq = 1;
		}
		
		if(seq>sequenciaMax){
		    sequenciaMax = seq;
		}
	}
	cout << sequenciaMax;
	return 0;
}