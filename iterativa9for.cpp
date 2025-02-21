//Crea un programa que pida al usuario ingresar un número
//y luego imprima todos los divisores de ese número
#include<iostream>
using namespace std;

int main(){
  //6146 7518
  int num;
  cout<<"Ingrese un numero para saber sus divisores: ";
  cin>>num;

  cout<<"Los dividores de: "<<num<<" son: ";
  for(int i=1;i<=num;i++){
    if(num%i==0){
      cout<<i<<" ";
    }
  }
  cout<<endl;
  return 0;
}
