#include<iostream>
using namespace std;

 int main(){
   int num;
   cout<<"Ingrese un número: ";
   cin>>num;

      if(num!=0){
        if(num>0){
        cout<<"El numero"<<num<<" es positivo";
        }
       else{
        cout<<"El numero"<<num<<" es negativo";
        }
      }
      else{
          cout<<"El numero "<<num<<" no es positivo ni negativo";
      }

   return 0;
 }
