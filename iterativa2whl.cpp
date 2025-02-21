//solicite al usuario un número y luego imprima todos los números
// desde 1 hasta ese número.
#include<iostream>
using namespace std;

int main(){
  int a = 1;
  int num;
  cout<<"Ingrese un numero:";
  cin>>num;

  while(a <= num){
    cout<<a<<endl;
    a++;
  }
  cout<<endl;
  return 0;

}