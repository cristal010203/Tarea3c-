//Escribe un programa en C++ que solicite al usuario ingresar
// la calificación numérica (0-100) de un estudiante y luego
// determine su calificación correspondiente (A, B, C, D o F) según la siguiente escala:
#include<iostream>
using namespace std;

int main(){
  int nota;
  cout<<"Ingrese su calificacion: ";
  cin>>nota;

     if(nota>=90 && nota<=100){
       cout<<"Felicidades su nota es: A";
     }else if(nota>=80 && nota<=89){
       cout<<"Bien Hecho, su nota es: B";
     }else if(nota>=70 && nota<=79){
       cout<<"Necesita mejorar su nota es: C";
     }else if(nota>=60 && nota<=69){
       cout<<"Su nota es: D";
     }else if(nota>=0 && nota<=59){
       cout<<"Su nota es: E";
     }else{
       cout<<"Su calificacion es invalida";
       }


       return 0;
  }