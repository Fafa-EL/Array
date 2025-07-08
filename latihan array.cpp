#include <vector>
#include <iostream>

int main()
{
    int n;
    std::cout << "masukkan jumlah array: ";
    std::cin >> n;

    std::vector<int> array;
    std::cout << "masukkan " << n << " angka." << std::endl;

    for (int i = 0; i < n; i++)
    {
        int angka;
        std::cout << "angka ke- " << i << " : ";
        std::cin >> angka;
        array.push_back(angka);
    }

    int total = 0;
    for (int i = 0; i < array.size(); i++)
    {
        total += array[i];
    }
    double rata = static_cast<double>(total) / array.size();

    int awal = array[0];
    int tengah = array[array.size() / 2];
    int akhir = array[array.size() - 1];

    std::cout << "total semua angka: " << total << std::endl;
    std::cout << "total rata rata: " << rata << std::endl;
    std::cout << "angka pertama: " << awal << std::endl;
    std::cout << "angka tengah: " << tengah << std::endl;
    std::cout << "angka akhir: " << akhir << std::endl;
    return 0;
}