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
    fout.open("MyFile.txt");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            fout << arr[i][j] << " ";
        }
        fout << "\n";
    }

    fout.close();
    // reading from file

    std::string line;
    std::ifstream fin("MyFile.txt");
    int i = 0;

    while (fin)
    {
        std::getline(fin, line);
        std::cout << line << std::endl;
    }

    return 0;
}