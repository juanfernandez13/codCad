#include <iostream>
using namespace std;
int main(){
	int num;
    cin >> num;
	if(num > 0){
		cout << "positivo";
		return 0;
	}
	else if(num < 0){
		cout << "negativo";
		return 0;
	}
	
	cout << "nulo";
	return 0;
}