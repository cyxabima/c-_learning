#include <iostream>

using namespace std;


int main(){
    int row , col ;
    row = 3;
    col = 3;

    int mat[row][col] ;

    for (int i = 0; i < row; i++)
    {
        for (int  j = 0; j < col; j++)
        {
            mat[i][j] = 4;
        }
        
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout<< endl;
    }
    

    return 0;
}