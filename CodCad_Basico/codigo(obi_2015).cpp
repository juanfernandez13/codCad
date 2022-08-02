#include <iostream>
using namespace std;
int main(){
	int sizeNum;
	int cem = 0;
	cin >> sizeNum;
	int Num[sizeNum];
	for(int i = 0; i<sizeNum; i++){
		cin >> Num[i];
	}
	
	for(int i = 0; i<sizeNum-2; i++)
		if(Num[i] == 1 && Num[i+1] == 0 && Num[i+2] == 0)
		    cem++;
	cout << cem;
	
	
	return 0;
}