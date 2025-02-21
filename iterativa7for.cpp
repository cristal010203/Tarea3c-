//Haz un programa que imprima los primeros 10 términos
//de la serie de Fibonacci
#include<iostream>
using namespace std;

int main(){
  int num1=0;
  int num2=1;
  int siguiente;

  for(int i=1;i<=10;i++){
    if(i == 1){
      cout<<num1<<" ";
      continue;
    }
    if(i == 2){
      cout<<num2<<" ";
      continue;
    }
    siguiente = num1 + num2;
    num1 = num2;
    num2 = siguiente;
    cout<<siguiente<<" ";
  }
  cout<<endl;
  return 0;
}