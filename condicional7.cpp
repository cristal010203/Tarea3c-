//Desarrolla un programa que determine si un año
//ingresado por el usuario es un año de nacimiento
//válido (mayor que 1900 y menor que el año actual).
#include<iostream>
using namespace std;

int main() {
    int año;
    cout<<"\n Ingrese su anio de nacimiento:";
    cin>>año;

        if (año>1900 && año<2025) {
            cout<<"Su anio de nacimiento es: "<<año<<endl;
            cout<<"Es valido";
        }else {
            cout<<"El anio: "<<año<<" no es valido"<<endl;
        }
    return 0;
}
