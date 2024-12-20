#include <iostream>

using namespace std;

int main(){

    int x [10];

    for (int i = 0; i < 10; i++)
    {
        x[i] = (i+1)*36;
    }

    for(int i:x){
        cout<< i << " ";
    }
    cout << endl;
    return 0;
}