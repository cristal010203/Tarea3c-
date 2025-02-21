//Desarrolla un programa que pida al usuario ingresar
// un número y luego imprima todos los números pares
// hasta ese número
#include<iostream>
using namespace std;

int main(){
  int num;
  int i = 2;

  cout<<"Ingresa un numero: ";
  cin>>num;

    while(i<=num){
      cout<<i<<" "<<endl;
      i+=2;
    }
    cout<<endl;
    return 0;
  }