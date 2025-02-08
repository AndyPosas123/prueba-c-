#include <iostream>

using namespace std;

int main() {
    
    
    int numcuenta,salado1,cargos1,credito1,limcode,newsal;
  

   
    cout << "Ingrese el numero de cuenta del cliente: ";
    cin >> numcuenta;

    cout << "Ingrese el saldo inicial de la cuenta: ";
    cin >> salado1;

    cout << "Ingrese el total de cargos del mes: ";
    cin >> cargos1;

    cout << "Ingrese el total de creditos aplicados en el mes: ";
    cin >> credito1;

    cout << "Ingrese el limite de credito permitido: ";
    cin >> limcode;

   
    newsal = salado1 + cargos1 - credito1;

    
    cout << "El nuevo saldo de la cuenta " << numcuenta << " es: " << newsal << endl;


    if (newsal > limcode) {
        cout << "Se excedio el limite de su credito." << endl;
    } else {
        cout << "El cliente esta dentro del limite de su credito." << endl;
    }

    return 0;
}
