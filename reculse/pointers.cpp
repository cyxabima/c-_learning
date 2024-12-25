#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4};
    int *ptr, *ptr2;
    ptr = arr;
    ptr2 = NULL;
    for (int i = 0; i < 4; i++)
    {
    cout<< *ptr << endl;
    ptr++;
    }
    int y = 32;
    ptr2 = &y;
    cout<< *ptr2 << endl;
    ptr2 +=4;  // add the size of 4 integers
    cout<< *ptr2 << endl;




    return 0;
}