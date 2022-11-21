#include <iostream>
using namespace std;

int main()
{
	int chaves = 0;
	string codigo;
	while (getline(cin, codigo))
	{
		for (int i = 0; i < codigo.size() && chaves >= 0; ++i){
		    if(codigo[i] == '{')
		        chaves++;
		    if(codigo[i] == '}')
		        chaves--;
		}
			
		if (chaves < 0) break;
	}
	cout << (chaves == 0? 'S' : 'N');
}

