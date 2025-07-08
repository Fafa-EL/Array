#include <iostream>

int main()
{

    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{5, 6}, {7, 8}};
    int C[2][2];

    std::cout << "hasil penjumlahan matriks" << std::endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            std::cout << C[i][j] << " ";
        }
    }

    return 0;
}