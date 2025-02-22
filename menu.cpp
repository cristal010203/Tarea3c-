//menu de estructuras de control
#include<iostream>
using namespace std;

void condicional1 () {
  int num;
  cout<<"Ingrese un numero: ";
  cin>>num;

  if(num!=0){
    if(num>0){
      cout<<"El numero "<<num<<" es positivo";
    }
    else{
      cout<<"El numero "<<num<<" es negativo";
    }
  }
  else{
    cout<<"El numero "<<num<<" no es positivo ni negativo";
  }
}
void condicional2 () {
  int num;
  cout<<"Ingrese un numero:";
  cin>>num;

  if(num%2==0){
    cout<<"El numero "<<num<<" es par";
  }else{
    cout<<"El numero "<<num<<" es impar";
  }
}
void condicional3 () {
  int a,b,c;
  int mayor;
  cout<<"Ingrese el primer numero:";
  cin>>a;
  cout<<"Ingrese el segundo numero:";
  cin>>b;
  cout<<"Ingrese el tercero numero:";
  cin>>c;

  if(a>b && a>c){
    mayor=a;
  } else if(b>a && b>c){
    mayor=b;
  } else if(c>a && c>b){
    mayor=c;
  }
  cout<<"El mayor es:"<<mayor;
}
void condicional4 () {
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
}
void condicional5 () {
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
}
void condicional6 () {
  int num,i;
  bool numprimo=true;
  cout<<"Enter a number: ";
  cin>>num;

  if(num<=1){
    numprimo=false;
  }else{
    i=2;
    while(i<num){
      if(num%i==0){
        numprimo=false;
        break;
      }
      i++;
    }
  }

  if(numprimo){
    cout<<"EL numero "<<num<< " es primo"<<endl;
  }else{
    cout<<num<<" No es es primo"<<endl;
  }
}
void condicional7 () {
  int año;
  cout<<"\n Ingrese su anio de nacimiento:";
  cin>>año;

  if (año>1900 && año<2025) {
    cout<<"Su anio de nacimiento es: "<<año<<endl;
    cout<<"Es valido";
  }else {
    cout<<"El anio: "<<año<<" no es valido"<<endl;
  }
}
void condicional8 () {
  int num;
  cout<<"Ingresa un numero: ";
  cin>>num;

  if(num%5==0 || num%7==0){
    if (num%5==0 && num%7!=0) {
      cout<<"El numero es multiplo de 5";
    }else if(num%7==0 && num%5!=0) {
      cout<<"El numero es multiplo de 7";
    }else {
      cout<<"El numero es multiplo de 5 y 7";
    }

  }else{
    cout<<"El numero no es multiplo de 5 y 7";
  }
}
void condicional9 () {
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
}
void condicional10 () {
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
    return;
  }
  cout<<"El precio final es: "<<precioFinal<<endl;
  cout<<"El descuento aplicado es:"<<descuentoFinal<<"%";
}
void iterativa1whl () {
  int num = 1;
  while(num <= 20){
    cout << num <<" "<<endl;
    num++;
  }
  cout << endl;
}
void iterativa2whl () {
  int a = 1;
  int num;
  cout<<"Ingrese un numero:";
  cin>>num;

  while(a <= num){
    cout<<a<<endl;
    a++;
  }
  cout<<endl;
}
void iterativa3whl () {
  int num;
  int sum=0;
  cout<<"Ingrese numeros positivos: ";
  cin>>num;

  while(num>=0){
    sum+=num;
    cin>>num;
  }
  cout<<"La suma de los numeros positivos es: "<<sum;
}
void iterativa4whl () {
  int numlim, a = 0, b = 1, c;
  cout<<"Ingrese un numero limite para la secuencia fibonacci: ";
  cin>>numlim;

  cout<<a<<" ";

  while(b<=numlim){
    cout<<b<<" ";
    c=a+b;
    a=b;
    b=c;
  }
  cout<<endl;
}
void iterativa5whl () {
  int num;
  int sum=0;

  while(sum < 100){
    cout<<"Ingrese algunos numeros:";
    cin>>num;
    sum+=num;
  }
  cout<<"La suma de los numeros es: "<<sum;
}
void iterativa6whl () {
  int num;
  int i = 2;

  cout<<"Ingresa un numero: ";
  cin>>num;

  while(i<=num){
    cout<<i<<" "<<endl;
    i+=2;
  }
  cout<<endl;
}
void iterativa7whl () {
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
}
void iterativa8whl () {
  int num;

  cout<<"Ingresa un numero: ";
  cin>>num;

  while(num!=0){
    cout<<"Ingresa un numero diferente: ";
    cin>>num;
  }
  cout<<"El numero es: "<<num;
}
void iterativa9whl () {
  int numero=1;
  int cuadrado= numero * numero;

  while(numero<=10){
    cout<<"Numero: "<<numero<<" Cuadrado: "<<numero * numero<<endl;
    numero=numero+cuadrado;
  }
}
void iterativa10whl () {
  int num = 1;
  int producto = 1;

  while (num <= 10) {
    producto = producto * num;
    num++;
  }
  cout <<"El producto de los primeros 10 numeros naturales es: "<< producto << endl;
}
void iterativa1for () {
  for(int i=2;i<20;i+=2){
    cout<<i<<" "<<endl;
  }
  cout<<endl;
}
void iterativa2for () {
  int num;
  cout<<"Ingrese un numero:";
  cin>>num;

  for(int i=1;i<=10;i++){
    cout<<num<<" X "<<i<<" = "<<i*num<<endl;
  }
}
void iterativa3for () {
  int n;
  int suma=0;
  cout<<"Ingrese un numero entero positivo: ";
  cin>>n;

  for(int i=2;i<=n;i+=2){
    suma=suma+i;
  }
  cout<<"La suma de todos los numeros pares del 1 al "<<n<<" = "<<suma;
}
void iterativa4for () {
  int num;
  unsigned long long factorial = 1;
  cout<<"Ingrese un numero para calcular su factorial: ";
  cin>>num;

  for(int i=1;i<=num;++i){
    factorial *= i;
  }
  cout<<"EL Factorial de "<<num<<" es: "<<factorial;
}
void iterativa5for () {
  cout<<"Los numeros primos del 1 al 50"<<endl;

  for(int num=2;num<=50;++num){
    bool esPrimo=true;

    for(int i=2;i<=num/2;++i){
      if(num%i==0){
        esPrimo=false;
        break;
      }
    }
    if(esPrimo==true){
      cout<<num<<" "<<endl;
    }
  }
  cout<<endl;
}
void iterativa6for () {
  int n;
  int suma=0;
  cout<<"Ingrese un numero entero positivo";
  cin>>n;

  for(int i=1;suma + i<=n;i++){
    suma+=i;
    cout<<suma<<" "<<endl;
  }
  cout<<endl;
}
void iterativa7for () {
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
}
void iterativa8for () {
  int suma = 0;
  for(int i = 1; i <= 100; i++){
    suma += i;
  }
  cout <<"La suma de los primeros 100 numeros naturales es: "<< suma << endl;
}
void iterativa9for () {
  int num;
  cout<<"Ingrese un numero para saber sus divisores: ";
  cin>>num;

  cout<<"Los dividores de: "<<num<<" son: ";
  for(int i=1;i<=num;i++){
    if(num%i==0){
      cout<<i<<" ";
    }
  }
  cout<<endl;
}
void iterativa10for () {
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
}

int main(){
  int opc;
    do{
      int a,b,c;
      cout<<"Menu de Estructuras de Control"<<endl;
      cout<<"1. Condicional If-Else"<<endl;
      cout<<"2. Iterativa While"<<endl;
      cout<<"3. Iterativa For"<<endl;
      cout<<"4. Salir del sistema"<<endl;
      cin>>opc;
      switch(opc) {
        case 1:
          cout<<"Seleccione una opcion:"<<endl;
          cout<<"1.Determinar si un numero es positivo, negativo o cero"<<endl;
          cout<<"2.Verifique si el numero es par o impar"<<endl;
          cout<<"3.Determine el numero mayor"<<endl;
          cout<<"4.Dermine si el año es bisiesto o no"<<endl;
          cout<<"5.Determine si la letra es vocal o consonante"<<endl;
          cout<<"6.Verificar si el numero es primo o no"<<endl;
          cout<<"7.Determinar si el año de nacimiento es valido"<<endl;
          cout<<"8.Determinar si el numero es multiplo de 5 y 7"<<endl;
          cout<<"9.Determinar la calificación con la nota obtenida"<<endl;
          cout<<"10.Calcular el precio de un producto aplicando el descuento"<<endl;
          cin>>a;
            if (a >= 1 && a <= 10) {
              switch (a) {
                case 1:
                  condicional1();
                break;
                case 2:
                  condicional2();
                break;
                case 3:
                  condicional3();
                break;
                case 4:
                  condicional4();
                break;
                case 5:
                  condicional5();
                break;
                case 6:
                  condicional6();
                break;
                case 7:
                  condicional7();
                break;
                case 8:
                  condicional8();
                break;
                case 9:
                  condicional9();
                break;
                case 10:
                  condicional10();
                  break;
              }
            }
        break;
        case 2:
          cout<<"Seleccione una opcion:"<<endl;
          cout<<"1.Mostrar los numeros del 1 al 20"<<endl;
          cout<<"2.Motrar todos los numeros hasta el que usted ingrese"<<endl;
          cout<<"3.Sume numeros positivos(se detendrá al agregar uno negativo)"<<endl;
          cout<<"4.Ingrese un numero para generar su secuencia fibonacci"<<endl;
          cout<<"5.Sume numeros hasta pasar del numero 100"<<endl;
          cout<<"6.Ingrese un numero para ver pares antecedores"<<endl;
          cout<<"7.Calcule la media de los numeros ingresados"<<endl;
          cout<<"8.Adivine el numero"<<endl;
          cout<<"9.Numeros naturales 1 al 10 y sus cuadrados"<<endl;
          cout<<"10.Calcular el producto de los primeros 10 numeros naturales"<<endl;
          cin>>b;
            if (b >= 1 && b <= 10)
              switch (b) {
                case 1:
                  iterativa1whl();
                break;
                case 2:
                  iterativa2whl();
                break;
                case 3:
                  iterativa3whl();
                break;
                case 4:
                  iterativa4whl();
                break;
                case 5:
                  iterativa5whl();
                break;
                case 6:
                  iterativa6whl();
                break;
                case 7:
                  iterativa7whl();
                break;
                case 8:
                  iterativa8whl();
                break;
                case 9:
                  iterativa9whl();
                break;
                case 10:
                  iterativa10whl();
                break;
              }
        break;
        case 3:
          cout<<"Seleccione una opcion:"<<endl;
          cout<<"1.Mostrar los numeros pares del 1 al 20"<<endl;
          cout<<"2.Motrar la tabla de multiplicar"<<endl;
          cout<<"3.Calcule la suma de todos los números pares desde 1 hasta n"<<endl;
          cout<<"4.Calcule el factorial de un número ingresado "<<endl;
          cout<<"5.Muestre la serie de numeros primos del 1 al 50"<<endl;
          cout<<"6.Muestre la siguiente serie: 1, 3, 6, 10, 15, ..., n."<<endl;
          cout<<"7.Muestre los primeros 10 terminos de la serie fibonacci"<<endl;
          cout<<"8.Sume los primero 100 numeros naturales"<<endl;
          cout<<"9.Ingrese un numero y se mostraran sus divisores"<<endl;
          cout<<"10.Muestre los primeros 10 numeros primos"<<endl;
          cin>>c;
            if (c >= 1 && c <= 10)
                switch (c) {
                  case 1:
                    iterativa1for();
                  break;
                  case 2:
                    iterativa2for();
                  break;
                  case 3:
                    iterativa3for();
                  break;
                  case 4:
                    iterativa4for();
                  break;
                  case 5:
                    iterativa5for();
                  break;
                  case 6:
                    iterativa6for();
                  break;
                  case 7:
                    iterativa7for();
                  break;
                  case 8:
                    iterativa8for();
                  break;
                  case 9:
                    iterativa9for();
                  break;
                  case 10:
                    iterativa10for();
                  break;
                }
        break;
        case 4:
          break;
      }

    }while(opc>=1 && opc<=4);
    return 0;
  }





