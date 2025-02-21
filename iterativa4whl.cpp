//Haz un programa que genere la secuencia de Fibonacci hasta un número ingresado por el usuario
#include<iostream>
using namespace std;


int main(){
  int numlim, a = 0, b = 1, c;
  cout<<"Ingrese un numero limite para la secuencia fibonacci: ";
  cin>>numlim;

  cout<<a<<" ";

  while(b<=numlim){
    cout<<b<<" ";
    c=a+b;
    a=b;
    b=c;
  }
  cout<<endl;
  return 0;
 }