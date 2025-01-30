#include <iostream>
using namespace std;

int main() {
  char arr[20];
    char karakter;
    bool ditemukan = false; 


    cout << "Masukkan karakter yang ingin dicari: ";
    cin >> karakter;

  
    cout << "Masukkan 20 karakter untuk mengisi array:" <<endl;
    for (int i = 0; i < 20; i++) {
        cout << "Karakter ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    for (int i = 0; i < 20; i++) {
        if (arr[i] == karakter) {
            ditemukan = true;
            cout << "Karakter '" << karakter<< "' ditemukan pada indeks ke-" << i <<endl;
        }
    }

    
    if (!ditemukan) {
        cout << "Karakter '" << karakter<< "' tidak ditemukan dalam array." <<endl;
    }

    return 0;
}