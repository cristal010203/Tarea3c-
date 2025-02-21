//Crea un programa que pida al usuario ingresar números
// hasta que el número ingresado sea igual a 0
#include<iostream>
using namespace std;

int main(){
  int num;

  cout<<"Ingresa un numero: ";
  cin>>num;

  while(num!=0){
    cout<<"Ingresa un numero diferente: ";
    cin>>num;
  }
  cout<<"El numero es: "<<num;
  return 0;
}