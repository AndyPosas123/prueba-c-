#include <iostream>
using namespace std;

class Persona {
protected:
	
    string nombre, clave, correo;
public:
	
    Persona(string n, string c, string e) : nombre(n), clave(c), correo(e) {}
    
    void crearCuenta() { cout << nombre << " ha creado una cuenta: " << correo << endl; }
    
    
    void accederCuenta() { cout << nombre << " ha iniciado sesión." << endl; }
    
    
};


class Gestor : public Persona {
	
    string correoCorp;
    
public:
	
	
    Gestor(string n, string c, string e, string corp) : Persona(n, c, e), correoCorp(corp) {}
    
    
    void gestionarProducto(string accion) { cout << "Gestor " << nombre << " ha " << accion << " un producto." << endl; }
};

class Comprador : public Persona {
	
	
    string tarjeta;
public:
    Comprador(string n, string c, string e, string t) : Persona(n, c, e), tarjeta(t) {}
    
    void comprar() { cout << "Comprador " << nombre << " compró con tarjeta terminada en " << tarjeta << endl; }
};

int main() {
    Persona user("Andy", "12345", "Andy@mail.com");
    Gestor admin("Javier", "jav123", "javier@mail.com", "posas@mail.com");
    Comprador cliente("Jose", "23123", "elena@mail.com", "5678");

    user.crearCuenta();
    user.accederCuenta();

    admin.accederCuenta();
    
    admin.gestionarProducto("agregado");
    
    admin.gestionarProducto("modificado");
    
    admin.gestionarProducto("eliminado");

    cliente.accederCuenta();
    
    cliente.comprar();

    return 0;
}
