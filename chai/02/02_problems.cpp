#include <iostream>
#include <string>
using namespace std;

int main()
{

    string tea_name;
    float price;
    char rating;
    int raised_price;
    cout << "Enter the price of tea : ";
    cin >> price;
    cin.ignore();

    raised_price = price + price * .01;

    cout << "Enter the name of tea : ";
    getline(cin, tea_name);

    cout << "Enter the rating of tea : ";
    cin >> rating;

    cout << raised_price << "\"" << tea_name << "\"" << rating;

    return 0;
}