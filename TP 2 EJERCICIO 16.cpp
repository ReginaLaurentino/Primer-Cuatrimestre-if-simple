/*
4.	Hacer un programa para ingresar por teclado las cuatro notas de los ex�menes obtenidas por un alumno
y luego emitir uno solo de los carteles de acuerdo a las siguientes condiciones:
-�Promociona�, si obtuvo en los cuatro ex�menes nota 7 o m�s.
-�Rinde examen final�, si obtuvo nota 4 o m�s en por lo menos tres ex�menes.
-�Recupera Parciales�, si obtuvo nota 4 o m�s en por lo menos uno de los ex�menes.
-�Recursa la materia�, si no aprob� ning�n examen parcial.

*/
#include <iostream>
using namespace std;

int main (){
int a, b, c, d;
float cua;
cout << "ingresar la primer nota: ";
cin >> a;
cout << "ingresar la segunda nota: ";
cin>> b;
cout << "ingresar la tercer nota: ";
cin>> c;
cout << "ingresar la cuarta nota: ";
cin>> d;

cua = 0;

if ( a >= 7 && b >=7 && c >= 7 && d >= 7) {
    cout << " promociona";

}
if ( a <4 && b < 4 && c < 4 && d <4)
{
 cout << " recursa la materia"   ;
}
 if (a> 4){
    cua++;
 }
 if (b> 4){
    cua++;
 }
 if (c> 4){
    cua++;
 }
 if (d> 4){
    cua++;
 }
 if ( cua >=3) {
    cout <<"Rinde examen final";
 }
else{
    cout<< "Recupera parciales";

}


return 0;}
