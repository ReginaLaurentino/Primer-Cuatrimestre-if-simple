/*
 Hacer un programa para ingresar tres números distintos y listarlos ordenados de menor a mayor.
 Ejemplo: si se ingresa 4,-3,7, se debe mostrar -3, 4,7.
 */

 #include<iostream>
using namespace std;

int main () {

int a, b, c;

cout << " Ingresar el primero numero: ";
cin >> a;
cout << "Ingresar el segundo numero: ";
cin>> b;
cout << "Ingresar el tercer numero: ";
cin >> c;

if ( a> b && b > c) {
    cout << c << "," << b << "," << a;
}
else {
    if ( a > b && b < c) {
        cout << b << ","  << a << "," << c;
    }
    else {
        cout << a << ","  << b << "," << c;
    }
}



return 0;
}
