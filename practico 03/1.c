#include <iostream>
#include <cmath>

using namespace std;
int main(){

double a,b, c, x1, x2, raiz ;

cout << "Calculadora de ecuacion cuadratica" <<endl;

cout << "Ingrese el valor de 'a':";cin >> a ;

if (a == 0) {
        cout << "Error: 'a' no puede ser 0." << endl;
        return 1;
    }

cout << "Ingrese el valor de 'b':";
cin >> b ;

cout << "Ingrese el valor de 'c':";
cin >> c ;

raiz = b*b - 4*a*c;

if (raiz < 0) {
        cout << "Error: La ecuacion tiene raices imaginarias (negativas)." << endl;
    }
    else {


x1=((-b+sqrt(raiz))/(2*a));
x2=((-b-sqrt(raiz))/(2*a));

cout <<"x1 es igual a " << x1 ;
cout <<"x2 es igual a " << x2 ;

    }
return 0;

}
