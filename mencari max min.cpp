#include <iostream>
using namespace std;
int main() {
   int arr[10], i, max, min;
   
   cout<<"masukkan array: "<<endl;
   for(i=0; i<10; i++){
   cin>>arr[i]; 
   }
   
   max = arr[0];
   min = arr[0];
  
   for(i=0; i<10; i++){
       if (arr[i]>max){
           max = arr[i];
       }
       if (arr[i]<min){
           min = arr[i];
       }
       }
  cout<<"nilai maksimum: "<<max<<endl;
  cout<<"nilai minimum: "<<min<<endl;
   
    return 0;
}