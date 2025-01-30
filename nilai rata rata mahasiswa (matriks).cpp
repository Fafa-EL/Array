#include <iostream>
using namespace std;

int main(){
int Siswa = 3, Kuliah = 3;
float rata, total;
string siswa[3];
string kuliah[3] = {"Algoritma", "Bahasa Inggris", "PTI"};
int nilai[Siswa][Kuliah];
   
    cout<<"masukkan nama: "<<endl;
    for (int i=0; i<3; i++){
        cin>>siswa[i];
    }
    
     for (int i = 0; i<Siswa; ++i){
        cout<<"NIlai Matkul: "<<siswa[i]<<endl;
        for (int j = 0; j<Kuliah; ++j){
            cout<<"nilai "<<kuliah[j]<<": ";
            cin>>nilai[i][j];
            
        }
     }
     for (int i = 0; i<Siswa; ++i){
        for (int j = 0; j<Kuliah; ++j){
            total += nilai[i][j];
        }
        rata = total/3;
        cout<<"siswa dengan nama "<<siswa[i]<<" rata ratanya adalah: "<<rata<<endl;
     }    
     return 0;
}