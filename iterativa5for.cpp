//Crea un programa que imprima la serie de números primos
//del 1 al 50.
#include<iostream>
using namespace std;

int main(){

  cout<<"Los numeros primos del 1 al 50"<<endl;

  for(int num=2;num<=50;++num){
    bool esPrimo=true;

    for(int i=2;i<=num/2;++i){
      if(num%i==0){
        esPrimo=false;
        break;
      }
    }
    if(esPrimo==true){
      cout<<num<<" "<<endl;
    }
  }
  cout<<endl;
  return 0;

}
