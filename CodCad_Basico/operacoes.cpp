#include <iostream>

using namespace std;

int main(){
	char operacao;
	cin>>operacao;
	double A,B;
	cin>>A;
	cin>>B;


	if(operacao == 'M'){
		printf("%.2f", A*B);
	}else{
		printf("%.2f", A/B);
	}
}
