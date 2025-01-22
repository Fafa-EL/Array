#include <iostream>
using namespace std;

int main() {
    
    int arr[10] = {0};
    arr[3] = 8;
    arr[2] = 8;
    arr[9] = 8;
    arr[8] = 8;
    arr[5] = 8;
    

    cout << "Posisi (indeks) array yang bernilai 8:" <<endl;
    for (int i = 0; i < 10; i++) {
        if (arr[i] == 8) {
            cout << "Array ke-" << i << endl;
        }
    }
    return 0;
}