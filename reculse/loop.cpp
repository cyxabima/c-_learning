#include <iostream>
using namespace std;

int main()
{
    int arry[32] = {1, 2, 3, 4, 5, 6};
    char name[] = "ukasha";
    int x = size(name);
    

    for (int i = 0; i < x; i++)
    {
        cout << name[i] << endl;
    }

    return 0;
}