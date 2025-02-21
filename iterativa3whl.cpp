//pida al usuario ingresar números positivos y los sume,
// deteniéndose cuando ingresa un número negativo
#include<iostream>
using namespace std;

int main(){
  int num;
  int sum=0;
  cout<<"Ingrese numeros positivos: ";
  cin>>num;

  while(num>=0){
    sum+=num;
    cin>>num;
  }
  cout<<"La suma de los numeros positivos es: "<<sum;
  return 0;
  }