#include <iostream> 

using namespace std;

int main(){
    string choice;
    int total_cup = 0;

    do
    {
    cout << "Do you Cup of Tea: ";
    getline(cin,choice);
    if (choice != "no"){
    total_cup +=1;
    }

    } while (choice != "no");
    
    cout<< "Total Cup you order are: " << total_cup << endl;
    cout<< "Total Price: " << total_cup* 25 << endl;
    
    return 0;
}