/*Un negocio de perfumería efectúa descuentos según el importe de la venta.

- Si el importe es menor a $100 aplicar un descuento del 5%
 - Si el importe es entre $100 y hasta $500 aplicar un descuento del 10%
 - Si el importe es mayor a $500 aplicar un descuento del 15%
 */

 #include<iostream>
using namespace std;

int main () {
float importe;

cout << "Ingresar el importe de la venta: ";
cin >> importe;

if ( importe > 500) {
    importe = importe *0.85;
}
else {
    if ( importe > 100){
        importe = importe *0.90;
    }
    else{
        importe = importe * 0.95;
    }


}

cout << "El informe con descuento seria: "<< importe;





return 0;
}
