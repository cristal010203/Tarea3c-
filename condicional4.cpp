//Haz un programa que determine si un año ingresado por el usuario
//es bisiesto o no
#include <iostream>
using namespace std;

int main() {
  int año;
  cout << "Ingrese un anio: ";
  cin>> año;

    if(año%4 == 0){
      if(año%100 == 0){
        if(año%400 == 0){
          cout<<"El anio"<<año<<" es bisiesto"<<endl;
        }else{
          cout << "El anio "<<año<<" no es bisiesto" << endl;
        }
      }
      else{
        cout << "El anio "<<año<<" es bisiesto" << endl;
      }
    }else{
       cout << "El anio "<<año<<" no es bisiesto" << endl;
     }

     return 0;

  }