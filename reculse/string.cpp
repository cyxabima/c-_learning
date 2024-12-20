#include <iostream>

using namespace std;

int main(){

    string x = "hello";
    // For each loop
    cout << "For each loop" << endl;
    for(char i : x){
        cout << i << endl;
    }

    // original for loop
    cout << "Original For Loop " << endl;
    for (int i = 0; i < x.length(); i++)
    {
        cout << x[i] << endl ;
    }
    
    return 0;
}