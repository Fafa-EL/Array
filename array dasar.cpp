/*#include <iostream>
using namespace std;
int main() {
   int i, nilai [5];
   nilai[0]=34;
   nilai[1]=56;
   nilai[2]=63;
   nilai[3]=77;
   nilai[4]=98;
   
   for(i=0; i<5;i++){
       cout<<nilai[i]<<endl;
   }
    return 0;
}*/

#include <iostream>
using namespace std;
int main() {
   int i, nilai [5];
   
   cout<<"input data: "<<endl;
   
   for(i=0; i<5;i++){
       cin>>nilai[i];
   }
   
   cout<<"output data: "<<endl;
   for(i=0;i<5;i++){
       cout<<nilai[i]<<endl;
   }
    return 0;
}