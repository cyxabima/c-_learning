#include <iostream>
using namespace std;

int main(){
    auto lambda = [](){
        cout<< "Hello world";
    };
    lambda();
    return 0;
}