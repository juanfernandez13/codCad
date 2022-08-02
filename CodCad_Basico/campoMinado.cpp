#include <iostream>
using namespace std;
int main(){
	int lenght;
    cin >> lenght;
	int campo[lenght];
	for(int i = 0; i<lenght; i++){
		cin >> campo[i];
	}
	
	for(int i = 0; i<lenght; i++){
		int minas = 0;
		minas += ( i>0 && (campo[i-1] == 1));
		minas += (campo[i] == 1);
		minas +=( i<lenght-1 && (campo[i+1] == 1));
			
		cout << minas;
	}	
	
	return 0;
}