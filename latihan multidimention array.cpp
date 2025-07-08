#include <iostream>
#include <iomanip> 

void buatTabelPerkalian(int n, int m) {
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (i == 0 && j == 0) {
                std::cout << std::setw(4) << "*";
            } else if (i == 0) {
                std::cout << std::setw(4) << j;
            } else if (j == 0) {
                std::cout << std::setw(4) << i;
            } else {
                std::cout << std::setw(4) << i * j;
            }
        }
        std::cout << std::endl;
    }
}

int main() {
    int n, m;
    std::cout << "Masukkan jumlah baris (n): ";
    std::cin >> n;
    std::cout << "Masukkan jumlah kolom (m): ";
    std::cin >> m;

    buatTabelPerkalian(n, m);

    return 0;
}
