//Escribe un programa que determine si un número ingresado
// por el usuario es múltiplo de 5 y de 7.
#include<iostream>
using namespace std;

int main() {
  int num;
  cout<<"Ingresa un numero: ";
  cin>>num;

  if(num%5==0 || num%7==0){
       if (num%5==0 && num%7!=0) {
           cout<<"El numero es multiplo de 5";
       }else if(num%7==0 && num%5!=0) {
           cout<<"El numero es multiplo de 7";
       }else {
           cout<<"El numero es multiplo de 5 y 7";
       }

     }else{
       cout<<"El numero no es multiplo de 5 y 7";
      }
      return 0;
  }