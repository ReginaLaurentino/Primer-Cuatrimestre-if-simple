/*
 Hacer un programa para ingresar por teclado cuatro números.
 Si los valores que se ingresaran están ordenados en forma creciente, emitir el mensaje “Conjunto Ordenado”,
  caso contrario emitir el mensaje: “Conjunto Desordenado”.
Ejemplo 1: si los números que se ingresan son 8,10, 12 y 14, entonces están ordenados.
Ejemplo 2: si los números que se ingresan son 8,12, 12 y 14, entonces están ordenados.
Ejemplo 3: si los números que se ingresan son 10, 8,12 y 14, entonces están desordenados.
*/

#include<iostream>
using namespace std;
int main (){

int a, b, c, d;

cout << " Ingresar primer numero: ";
cin >> a;
cout << " Ingresar segundo numero: ";
cin >> b;
cout << " Ingresar tercer numero: ";
cin >> c;
cout << " Ingresar cuarto numero: ";
cin >> d;

if ( d > c && c > b && b > a ){
    cout << "Estan ordenados";
}
else {
    cout << "Estan desordenados";
}






return 0;
}
