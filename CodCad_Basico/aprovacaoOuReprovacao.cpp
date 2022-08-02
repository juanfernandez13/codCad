#include <iostream>
using namespace std;
int main(){
	int num;
    cin >> num;
	if(num >= 7){
		cout << "Aprovado";
		return 0;
	}
	else if(num <= 3){
		cout << "Reprovado";
		return 0;
	}
	
	cout << "Recuperacao";
	return 0;
}