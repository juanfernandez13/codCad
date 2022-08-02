#include <iostream>
using namespace std;
int main(){
	int bandejas,latas,copos,quebrados;
	cin >> bandejas;
	quebrados = 0;
	
	for(int i = 0; i<bandejas; i++){
		cin >> latas;
		cin >> copos;
		if(copos<latas)
			quebrados += copos;
	}
	
	cout << quebrados;
    
	return 0;
}