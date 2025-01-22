#include <iostream>
using namespace std;

int main(){
string kategori[3] = {"makanan", "minuman", "alat tulis"};
string barang [3][2] = {{"Makaroni", "Pizza"}, {"apple juice", "esteh"}, {"pulpen","spidol"}};
int harga[3][2] = {{15000, 80000}, {32000, 5000}, {2000, 7500}};

cout << "daftar barang: "<<endl;
for (int i=0; i<3; i++){
    cout<<kategori[i]<<endl;
    for (int j=0; j<2; j++){
    cout<<j+1<<"."<<barang[i][j]<<" rp "<<harga[i][j]<<endl;
    }
    cout<<endl;
}

int pilkat, pilbar;
cout<<"pilih kategori; ";
cin>>pilkat;
cout<<"pilih barang: ";
cin>>pilbar;

cout<<"harga produk "<<barang[pilkat-1][pilbar-1]<<" adalah Rp "<<harga[pilkat-1][pilbar-1]<<endl;
return 0;
}