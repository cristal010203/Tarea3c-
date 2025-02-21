//Escribir un programa que determine si una letra ingresada por el usuario
//es vocal o consonante
#include<iostream>
using namespace std;

    int main() {
        char letra;
        cout<<"Escriba una letra : ";
        cin>>letra;

        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
            cout<<"La letra "<<letra<<" es una vocal";
        }else if (letra >= 'a' && letra <= 'z') {
            cout<<letra<<" es una consonante";
        }else {
            cout<<letra<<"no es valida";
        }
        return 0;

    }