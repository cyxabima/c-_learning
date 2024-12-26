#include<iostream>

using namespace std;
int main(){
    int tea_cup;

    while (tea_cup > 0){
        cout << "serving Tea Cup \n" << tea_cup<< ": are remaining Cups" << endl;
        tea_cup -= 1;
    }
    cout << "No Cup left";
    return 0;
}