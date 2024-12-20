#include <iostream>
using namespace std;

int main()
{
    int cups = 12;
    string badge;
    if (cups > 20)
    {
        badge = "Golden";
    }
    // else if (cups > 10 && cups <= 20)
    else if (cups > 10)
    {
        badge = "Silver";
    }
    else badge ="Nothing ";
    cout << "Your badge is :" << badge << endl;
}