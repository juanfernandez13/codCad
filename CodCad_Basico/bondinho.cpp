#include <iostream>
using namespace std;
int main(){
	int A,M;
	cin >> A;
	cin >> M;
	if(A+M <= 50){
		cout << "S";	
	}
	else{
		cout << "N";
	}
	return 0;
}