#include <iostream>
using namespace std;
int main() {
   char arr[10]= {'a','b','c','d','e','f','g','h','i','j'};
   int i;
 
   cout<<"isi array dengan indeks ganjil: "<<endl;
   for (int i=1; i<10; i+=2){
       cout<<"indeks "<<i<<";"<<arr[i]<<endl;
   }
     
   
    return 0;
}