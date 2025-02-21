//Desarrolla un programa que calcule el producto
//de los primeros 10 números naturales
#include<iostream>
using namespace std;

int main() {
    int num = 1;
    int producto = 1;

    while (num <= 10) {
        producto = producto * num;
        num++;
    }
    cout <<"El producto de los primeros 10 numeros naturales es: "<< producto << endl;
    return 0;
}