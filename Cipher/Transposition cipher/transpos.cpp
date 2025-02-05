#include <iostream>
#include <string>
#include <vector>

using namespace std;



int main(){

    cout << "enter the string to be encrypted" << endl;

    string plaintext;
    
    getline(cin, plaintext);

    //cout << plaintext << endl; 
    
    vector<char> str_store;    

    int str_len = plaintext.length();

    for(int i=0; i<str_len;  i++){
        if(plaintext[i] == ' '){
            continue;
        }else{
            str_store.push_back(plaintext[i]);
        }
    }

    for (int i = 0; i < str_store.size(); i++) {
        cout << str_store[i] << " ";
    }

    return 0;
}