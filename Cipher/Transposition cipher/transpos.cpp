#include <iostream>
#include <string>
#include <vector>

using namespace std;

void removeSpaces(char *str)
{
    // To keep track of non-space character count
    int count = 0;

    // Traverse the given string. If current character
    // is not space, then place it at index 'count++'
    for (int i = 0; str[i]; i++)
        if (str[i] != ' ')
            str[count++] = str[i]; // here count is
                                   // incremented
    str[count] = '\0';
}

int main(){

    cout << "enter the string to be encrypted" << endl;

    char* plaintext;
    
    cin >> plaintext;

    cout << plaintext << endl; 
    
    removeSpaces(plaintext);

    cout << plaintext << endl;  
    
    vector<char> str_store;    

    /*

    for(int i=0; i<str_len;  i++){
        str_store.insert(str_store.begin() + i, plaintext[i]);
    }

    for (int i = 0; i < str_store.size(); i++) {
        cout << str_store[i] << " ";
    }

    */

    return 0;
}