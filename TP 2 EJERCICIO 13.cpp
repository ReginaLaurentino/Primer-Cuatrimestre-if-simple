/*
 Hacer un programa para leer tres números diferentes y determinar e informar el número del medio.
  Ejemplo: si se ingresan 6, 10, 8, se emitirá 8.
  */

#include<iostream>
using namespace std;

int main () {
int a, b, c;

cout << " Ingresar primer numero: ";
cin >> a;
cout << " Ingresar segundo numero: ";
cin >> b;
cout << " Ingresar tercer numero: ";
cin >> c;

if ( a < b && a > c  ) {
    cout << "el numero del medio es " << a;
}
else {
    if ( a < b && b < c) {
        cout << "el numero del medio es " << b;
    }
    else {
        cout << "el numero del medio es " << c;
    }
}







return 0;
}
