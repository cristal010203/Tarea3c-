//Escribe un programa que solicite al usuario ingresar
// números hasta que la suma de los números ingresados
// sea mayor a 100.
#include<iostream>
using namespace std;

int main(){
  int num;
  int sum=0;

    while(sum < 100){
      cout<<"Ingrese algunos numeros:";
      cin>>num;
      sum+=num;
    }
    cout<<"La suma de los numeros es: "<<sum;

    return 0;
  }


