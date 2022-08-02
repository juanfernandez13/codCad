#include <cmath>
#include <iostream>
using namespace std;

int main(){
	int num;
	cin >> num;
	double valores[num];
	
	for(int i = 0; i<num; i++){
		cin >> valores[i];
	}
	for(int i = 0; i<num; i++){
		printf("%.4f",sqrt(valores[i]));
	}
	return 0;
}