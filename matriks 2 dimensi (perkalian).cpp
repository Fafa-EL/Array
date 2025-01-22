#include <iostream>
using namespace std;

int main() {
    int matriksA[2][2] = {{1, 2}, {3, 4}};
    int matriksB[2][2] = {{5, 6}, {7, 8}};
    int hasilA[2][2];
    int hasilB[2][2];

    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            hasilA[i][j] = matriksA[i][j]*5;
        }
    }
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            hasilB[i][j] = matriksB[i][j]*5;
        }
    }

    cout << "Hasil perkalian matriksA: "<<endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << hasilA[i][j] << endl;
        }
    }
    
    cout << "Hasil perkalian matriksB: "<<endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << hasilB[i][j] << endl;
        }
    }

    return 0;
}