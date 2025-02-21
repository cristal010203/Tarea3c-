//solicite al usuario ingresar el precio de un artículo y el porcentaje de descuento aplicable.
// El programa debe calcular el precio después del descuento y mostrarlo por pantalla
#include<iostream>
using namespace std;

int main(){
  float precio,descuento,precioFinal,descuentoFinal;
  cout<<"Ingrese el precio del producto:";
  cin>>precio;
  cout<<"Ingrese el descuento:";
  cin>>descuento;
      if(descuento>=0 && descuento<=100){
        precioFinal= precio-(precio*descuento/100);
        descuentoFinal= (precio*descuento/100);
      }else{
        cout<<"Porcentaje de descuento invalido";
        return 1;
      }
      cout<<"El precio final es: "<<precioFinal<<endl;
      cout<<"El descuento aplicado es:"<<descuentoFinal<<"%";
      return 0;

  }
