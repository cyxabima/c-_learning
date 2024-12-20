#include <iostream>

using namespace std;
int main(){
    int choice ;
    cout << "Which Chai You want\n1. Masla Chai\n 2. Green Tea\n 3. Black Chai ";

    cin >> choice;

    switch(choice){

        case 1: 
        cout<< "You Chai is Masla"; 
        break;
        case 2:
        cout<< "You Chai is Green";
        break;
        case 3:
        
        cout<< "You Chai is Black";
        break;
        default:
        cout<< "You Chai is not Aavailable";

    }
    cout << endl;

}