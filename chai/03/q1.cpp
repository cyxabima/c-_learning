#include <iostream>
using namespace std;

int main(){
    int no_cups ;
    float price, total_price, discounted_price ;
    no_cups =12;
    price = 50;

    total_price = price * no_cups;
    if (total_price > 100){
        discounted_price = total_price - (total_price*.05);
    }

    cout<< discounted_price;
    return 0;
}