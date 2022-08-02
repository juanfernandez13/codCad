#include <iostream>
using namespace std;
int main(){
	int P,R;
    cin >> P;
	cin >> R;
	
	if(P+R == 2){
		cout << "A";
		return 0;
	}
	if(P == 0){
		cout << "C";
		return 0;
	}
	
	cout << "B";
	return 0;
}