//Haz un programa que calcule la media de una serie
// de números ingresados por el usuario
#include<iostream>
using namespace std;

int main() {
  int num;
  int contador = 0;
  float media;
  float suma = 0;

  cout << "Ingrese algunos numeros para calcular la media, si desea parar ingrese un numero negativo: ";
  cin >> num;

  while (num>= 0) {
    suma = suma + num;
    contador++;
    cin >> num;
  }
  if (contador > 0) {
    media = suma/contador;
    cout << "La media de los numeros es: "<<media << endl;
  }else {
    cout<<"No se ingresaron numeros positivos"<<endl;
  }
  return 0;
}