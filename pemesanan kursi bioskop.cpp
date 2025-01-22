#include <iostream>
using namespace std;
int main() {
    int baris, kolom;
    int kursi [3][4]= {
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };


    cout << "Layout Kursi Awal : \n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << kursi [i][j] << " ";
        }
        cout << endl;
    }


    do {
        cout << "\nMasukkan Nomor Baris (1-3) di Pesan : ";
        cin >> baris;
        cout << "Kolom (1-4) yang Ingin di Pesan : ";
        cin >> kolom;


        if (baris == 0 && kolom == 0){
            break;
        }
        if (baris < 1 || baris > 3 || kolom < 1 || kolom > 4){
            cout << "Nomor Baris atau Kolom Tidak Valid. Silahkan coba lagi." << endl;
            continue;
        }
        if (kursi[baris-1][kolom-1] == 1){
            cout << "Maaf, Kursi Tersebut Sudah Terisi." << endl;
        }else{
            kursi [baris-1][kolom-1] = 1;
            cout << "Kursi Berhasil di Pesan." << endl;
        }
        cout << "\nLayout Kursi Terbaru : \n";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 4; j++) {
                cout << kursi [i][j] << " ";
            }
            cout << endl;
        }
    }while (baris !=0 || kolom !=0);
    cout << "Terimakasih Sudah Memesan." << endl;


    return 0;
