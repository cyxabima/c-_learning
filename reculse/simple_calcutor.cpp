#include <iostream>

using namespace std;

float sum(float a, float b)
{
    return a + b;
}

int main()
{
    float a, b, result;
    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;
    result = sum(a, b);
    cout << "Sum of number is : " << result << endl;

    return 0;
}