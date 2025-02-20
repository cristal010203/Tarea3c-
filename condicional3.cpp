//Desarrolla un programa que solicite al usuario ingresar tres números
// y muestre el mayor de los tres.
#include<iostream>
using namespace std;

int main(){
  int a,b,c;
  int mayor;
  cout<<"Ingrese el primer numero:";
  cin>>a;
  cout<<"Ingrese el segundo numero:";
  cin>>b;
  cout<<"Ingrese el tercero numero:";
  cin>>c;

      if(a>b && a>c){
        mayor=a;
      } else if(b>a && b>c){
        mayor=b;
      } else if(c>a && c>b){
        mayor=c;
      }
      cout<<"El mayor es:"<<mayor;

      return 0;

  }