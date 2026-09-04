#include <iostream>
#include <string>

using namespace std;

int main(){
    string nombre;   
    double monto;


cout << "Ingrese su nombre:";
getline(cin, nombre);

cout << "Ingrese monto a retirar";
cin >> monto;

cout << "Usted retiro efectivamente:"<<monto;

return 0;
}
