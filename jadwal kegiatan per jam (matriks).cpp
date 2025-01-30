#include <iostream>
#include <string>
using namespace std;

   int Hari = 3;
   int Jam = 4;
   string hari[3];
   int main() {
   string jam[4] = {"08.00-10.00", "10.00-12.00", "12.00-14.00", "14.00-16.00"};
   string jadwal[Hari][Jam];
    
    cout<<"masukkan hari: "<<endl;
    for (int i=0; i<3; i++){
        cin>>hari[i];
    }
    
    for (int i = 0; i<Hari; ++i){
        cout<<"jadwal kegiatan "<<hari[i]<<endl;
        for (int j = 0; j<Jam; ++j){
            cout<<"Jam "<<jam[j]<<": ";
            cin>>jadwal[i][j];
        }
    }
    
    cout<<endl;
    cout<<"jadwal kegiatan harian: "<<endl;
    for (int i = 0; i<Hari; ++i){
        cout<<"jadwal kegiatan "<<hari[i]<<endl;
        for (int j = 0; j<Jam; ++j){
            cout<<jam[j]<<":"<<jadwal[i][j]<<endl;
        }
    }
    
    return 0;
}