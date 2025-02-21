//Haz un programa que calcule el factorial de un
//número ingresado por el usuario.
#include<iostream>
using namespace std;

int main(){
  int num;
  unsigned long long factorial = 1;
  cout<<"Ingrese un numero para calcular su factorial: ";
  cin>>num;

  for(int i=1;i<=num;++i){
    factorial *= i;
  }
  cout<<"EL Factorial de "<<num<<" es: "<<factorial;
  return 0;
}
