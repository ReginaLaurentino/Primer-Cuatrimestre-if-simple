/*
 Hacer un programa para ingresar por teclado la fecha de nacimiento de una persona,
ingresando d�a, mes y a�o como 3 datos individuales.
Luego ingresar la fecha actual ingresando d�a, mes y a�o como 3 datos individuales.
Calcular luego la edad en a�os de esa persona y listarlo por pantalla.
Ejemplo 1. Si se ingresa como fecha de nacimiento: 3/12/2000 y la fecha
actual es 26/2/2019 la edad de esa persona es 18 ya que los 19 reci�n los cumple en diciembre.
Ejemplo 2. Si se ingresa como fecha de nacimiento: 3/1/2000 y la fecha actual es 26/2/2019 la edad de esa persona es 19.
Ejemplo 3. Si se ingresa como fecha de nacimiento: 28/2/2000 y la fecha actual es 26/2/2019 la edad de esa persona es 18
 ya que le faltan 2 d�as para cumplir los 19 a�os
 */
#include<iostream>
using namespace std;

int main () {

int d, m, a, da, ma,aa, f;
cout << " Ingresar la fecha de cumpleanos";
cout << endl;
cout << "dia: ";
cin >> d;
cout << "mes: ";
cin >> m;
cout << "ano: ";
cin >> a;
cout << "Ingresar la fecha actual";
cout << endl;
cout << "dia: ";
cin >> da;
cout << "mes: ";
cin >> ma;
cout << "ano: ";
cin >> aa;

if ( aa > a && ma > m && da > d ){
    f= aa -a;
}
else {
    if ( aa > a && ma == m & d > da) {
        f = aa -a -1;
    }
    else {
        f = aa - a -1;
    }
}

cout << "La edad actual es: " << f;












return 0;
}
