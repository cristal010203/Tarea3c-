//Desarrolla un programa que imprima la siguiente serie:
// 1, 3, 6, 10, 15, ..., n
#include<iostream>
using namespace std;

int main(){
  int n;
  int suma=0;
  cout<<"Ingrese un numero entero positivo";
  cin>>n;

  for(int i=1;suma + i<=n;i++){
    suma+=i;
    cout<<suma<<" "<<endl;
  }
  cout<<endl;
  return 0;
}