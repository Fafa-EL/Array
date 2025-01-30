#include <iostream>
using namespace std;
int main() {
   int i, nilai, kolom;
   float total=0, rata;
   
   cout<<"masukkan array: "<<endl;
   cin>>kolom; 
   
   cout<<"masukkan "<<kolom<<" angka"<<endl;
   
   for(i=0; i<kolom; i++){
       cin>>nilai;
       total=total+nilai;
   }
  
   rata=(total/kolom);
   cout<<"total nilai: "<<total<<endl;
   cout<<"nilai rata rata dari "<<kolom<<" adalah: "<<rata<<endl;
   
    return 0;
}