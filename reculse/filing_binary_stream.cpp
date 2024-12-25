#include <iostream>
#include <fstream>
void print_matrix(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
int main()
{
    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = 1 + j + i;
        }
    }

    print_matrix(arr, 3, 3);

    // writing to file : character io

    // std::ofstream fout("filename.txt");
    // or
    std::ofstream fout;
    fout.open("binary.bin");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            fout.write((char *)&arr[i][j], std::ios::binary);
        }
    }

    fout.close();


    // reading from file
    std::ifstream fin("binary.bin");
    int new_matrix [3][3];
    if (fin.fail())
    {
        std::cout << "Did not found that file name";
        return -1;
    }
    else
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                fin.read((char *)&new_matrix[i][j], std::ios::binary);
            }
        }
    }
    print_matrix(new_matrix,3,3);
    return 0;
}