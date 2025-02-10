#include <iostream>
using namespace std;

class Vehiculo {
protected:
    string matricula, modelo;
    int potencia;

public:
    Vehiculo(string m, string mod, int p) : matricula(m), modelo(mod), potencia(p) {}
    string getMatricula() { return matricula; }
    string getModelo() { return modelo; }
    int getPotencia() { return potencia; }
};



class Taxi : public Vehiculo {
	
    string licencia;
public:
	
    Taxi(string m, string mod, int p, string lic) : Vehiculo(m, mod, p), licencia(lic) {}
    string getLicencia() { return licencia; }
};

class Autobus : public Vehiculo {
    int plazas;
    
public:
	
    Autobus(string m, string mod, int p, int pl) : Vehiculo(m, mod, p), plazas(pl) {}
    int getPlazas() { return plazas; }
};


int main() {
    Taxi t("5678XYZ", "Nissan Sentra", 90, "TX6789");
    Autobus a("1122JKL", "Volvo Coach", 250, 60);
    
    
    
    cout << "Taxi: " << t.getMatricula() << " | " << t.getModelo() << " | " << t.getPotencia() 
         << "CV | Licencia: " << t.getLicencia() << endl;
    
    cout << "Autobus: " << a.getMatricula() << " | " << a.getModelo() << " | " << a.getPotencia() 
         << "CV | Plazas: " << a.getPlazas() << endl;

    return 0;
}
