#include <iostream>
using namespace std;

int main(){
    int array[3][5] = {
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5},
    };

    for(auto i : array){
        cout<<i[0]<< "\n"<< i[1] << i[2] << i[3] << i[4];
    }

    return 0;
}