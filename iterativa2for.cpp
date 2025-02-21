//Escribe un programa que solicite al usuario un
// número y muestre la tabla de multiplicar de ese
// número del 1 al 10.
#include<iostream>
using namespace std;

int main(){
  int num;
  cout<<"Ingrese un numero:";
  cin>>num;

  for(int i=1;i<=10;i++){
    cout<<num<<" X "<<i<<" = "<<i*num<<endl;
  }
  return 0;
 }