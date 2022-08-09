#include <iostream>
using namespace std;

string title(string text){
    for(int i = 0; i < text.size();i++){
        if(i == 0 || text[i-1] == ' '){
            text[i] = toupper(text[i]);
        }else{
            text[i] = tolower(text[i]);

        }
    }

    return text;
}

int main(){ 
    string F;

    getline(cin, F);

    cout << title(F) << "\n";
}