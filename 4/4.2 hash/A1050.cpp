#include <iostream>
using namespace std;

int main(void){
    string input, del;
    bool HashCheck[128] = {false};
    getline(cin, input);
    getline(cin, del);
    for(int i = 0; i < del.length(); i++){
        HashCheck[del[i]] = true;
    }
    for(int i = 0; i < input.length(); i++){
        if(!HashCheck[input[i]]) cout << input[i];
    }
    return 0;
}
