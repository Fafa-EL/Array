#include <iostream>

int main()
{
    int A[3][3] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};
    int B[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int C[3][3];
    int pilih;

    std::cout << "Pilihan perhitungan matriks:\n";
    std::cout << "1. Penjumlahan\n";
    std::cout << "2. Pengurangan\n";
    std::cout << "3. Perkalian\n";
    std::cout << "4. Determinan A\n";
    std::cout << "5. Invers A\n";
    std::cout << "Tentukan pilihan: ";
    std::cin >> pilih;

    if (pilih == 1)
    {
        std::cout << "\nHasil Penjumlahan Matriks:\n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                C[i][j] = A[i][j] + B[i][j];
                std::cout << C[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
    else if (pilih == 2)
    {
        std::cout << "\nHasil Pengurangan Matriks:\n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                C[i][j] = A[i][j] - B[i][j];
                std::cout << C[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
    else if (pilih == 3)
    {
        std::cout << "\nHasil Perkalian Matriks:\n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                C[i][j] = 0;
                for (int k = 0; k < 3; k++)
                {
                    C[i][j] += A[i][k] * B[k][j];
                }
                std::cout << C[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
    else if (pilih == 4)
    {
        int det_A =
            A[0][0] * (A[1][1] * A[2][2] - A[1][2] * A[2][1]) -
            A[0][1] * (A[1][0] * A[2][2] - A[1][2] * A[2][0]) +
            A[0][2] * (A[1][0] * A[2][1] - A[1][1] * A[2][0]);

        std::cout << "\nDeterminan Matriks A: " << det_A << std::endl;
    }
    else if (pilih == 5)
    {
        int det_A =
            A[0][0] * (A[1][1] * A[2][2] - A[1][2] * A[2][1]) -
            A[0][1] * (A[1][0] * A[2][2] - A[1][2] * A[2][0]) +
            A[0][2] * (A[1][0] * A[2][1] - A[1][1] * A[2][0]);

        std::cout << "\nDeterminant = " << det_A << std::endl;

        if (det_A == 0)
        {
            std::cout << "Matriks A tidak memiliki inverse karena determinan = 0.\n";
        }
        else
        {
            std::cout << "\nInverse Matriks A:\n";
            double inv[3][3];
            inv[0][0] = (A[1][1] * A[2][2] - A[1][2] * A[2][1]) / (double)det_A;
            inv[0][1] = -(A[0][1] * A[2][2] - A[0][2] * A[2][1]) / (double)det_A;
            inv[0][2] = (A[0][1] * A[1][2] - A[0][2] * A[1][1]) / (double)det_A;

            inv[1][0] = -(A[1][0] * A[2][2] - A[1][2] * A[2][0]) / (double)det_A;
            inv[1][1] = (A[0][0] * A[2][2] - A[0][2] * A[2][0]) / (double)det_A;
            inv[1][2] = -(A[0][0] * A[1][2] - A[0][2] * A[1][0]) / (double)det_A;

            inv[2][0] = (A[1][0] * A[2][1] - A[1][1] * A[2][0]) / (double)det_A;
            inv[2][1] = -(A[0][0] * A[2][1] - A[0][1] * A[2][0]) / (double)det_A;
            inv[2][2] = (A[0][0] * A[1][1] - A[0][1] * A[1][0]) / (double)det_A;

            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    std::cout << inv[i][j];
                }
                std::cout << std::endl;
            }
        }
    }
    else
    {
        std::cout << "\nPilihan tidak valid.\n";
    }

    return 0;
}