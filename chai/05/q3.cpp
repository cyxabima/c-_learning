#include <iostream>

using namespace std;
int main(){
    int cups;
    float price, total_price, discount;
    price = 2.5;
    cups = 20;
    total_price = cups * price;

    if (cups > 20){
        discount = .20;
    }
    
    else if (cups > 10){
        discount = .10;
    }
    else{
        discount = 0;
    }
    total_price -= (total_price*discount);
    cout << "Total Price " << total_price;
    return 0;
}