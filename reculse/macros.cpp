#include <iostream>
#define SIZE 5
#define abs(x) ((x) < 0 ? -(x) : (x))
#define INCLUDE_ABS_MODULE

using namespace std;

int main()  
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << i + 1 << endl;
    }
#ifdef INCLUDE_ABS_MODULE
    cout << "This belongs to Abs Module: ";
    cout << abs(-5) << endl;
#endif
    return 0;
}