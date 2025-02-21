//Escribe un programa en C++ que solicite al usuario
//ingresar un número entero positivo n y luego calcule
// la suma de todos los números pares desde 1 hasta n.
#include<iostream>
using namespace std;

int main(){
  int n;
  int suma=0;
  cout<<"Ingrese un numero entero positivo: ";
  cin>>n;

  for(int i=2;i<=n;i+=2){
    suma=suma+i;
  }
  cout<<"La suma de todos los numeros pares del 1 al "<<n<<" = "<<suma;
  return 0;
}