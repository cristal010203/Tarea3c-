//Crea un programa que pida al usuario ingresar un número
// y verifique si es primo o no
#include<iostream>
using namespace std;

int main(){
  int num,i;
  bool numprimo=true;
  cout<<"Enter a number: ";
  cin>>num;

      if(num<=1){
        numprimo=false;
      }else{
        i=2;
        while(i<num){
          if(num%i==0){
            numprimo=false;
            break;
          }
          i++;
        }
      }

    if(numprimo){
    cout<<"EL numero "<<num<< " es primo"<<endl;
    }else{
    cout<<num<<" No es es primo"<<endl;
    }
  return 0;
 }