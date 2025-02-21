//Desarrolla un programa que imprima los primeros 10
//números primos
#include<iostream>
#include <math.h>
#include <valarray>
using namespace std;

int main() {
    int contador = 0;
    int nump=2;

    for (; contador<10; ++nump) {
        bool esPrimo = true;
        for (int i = 2; i <= nump/2; i++) {
            if (nump % i == 0) {
                esPrimo = false;
                break;
            }
        }
        if (esPrimo) {
            cout << nump <<" "<< endl;
            contador++;
        }
    }
    cout<<endl;
    return 0;
}