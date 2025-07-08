#include <vector>
#include <iostream>
int main()
{
    std::vector<int> angka = {10, 20, 30, 40, 50};
    angka.push_back(60); // Menambahkan elemen

    for (int i : angka)
    {
        std::cout << i << " ";
    }

    return 0;
}
