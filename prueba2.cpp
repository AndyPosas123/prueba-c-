#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double peso, estatura, bmi;

    cout << "Altura (m): ";
    cin >> estatura;

    cout << "Peso (kg): ";
    cin >> peso;

    bmi = peso / pow(estatura, 2);


    if (bmi <= 18.5) {
        cout << "Bajo peso: " << bmi << endl;
    } else if (bmi > 18.5 && bmi < 24.9) {
        cout << "Peso normal: " << bmi << endl;
    } else if (bmi >= 25 && bmi < 29.9) {
        cout << "Sobrepeso: " << bmi << endl;
    } else {
        cout << "Obesidad: " << bmi << endl;
    }

    return 0;
}
