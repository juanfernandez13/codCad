#include <iostream>
using namespace std;
int main(){
	int lenght,A,B;
	cin >> lenght;
	int sequencia;
	A =0,B = 0;
	for(int i = 0; i<lenght; i++){
		 cin >> sequencia;
		sequencia == 1? A = !A: B=!B;
		if(sequencia == 2) 
			A = !A;
	}
    cout << A;
	cout << "\n";
	cout << B;
	return 0;
}