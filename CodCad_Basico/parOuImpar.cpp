#include <iostream>
using namespace std;
int main(){
	int bino,cino;
	cin >> bino;
	cin >> cino;
	
	if((bino+cino)%2 == 0){
		cout << "Bino";
		return 0;	
	}
	cout << "Cino";	
		
	return 0;
}