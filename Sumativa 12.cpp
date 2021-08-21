#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    string codigo("");
    string nombre("");
    string apellido("");
    string telefono("");
    string celular("");
    string correo("");
    string ciudad("");
    string pais("");
 
    int unos(0);
    int ceros(0);
    bool codigoCorrecto(false);
 
    cout << "Ingrese codigo de seguridad:\ncodigo = ";
    cin >> codigo;
    const bool sonochocifras(codigo.size() == 8);
    const bool esnumbinario((codigo.at(0) == '1' || codigo.at(0) == '0') &&
                            (codigo.at(1) == '1' || codigo.at(1) == '0') &&
                            (codigo.at(2) == '1' || codigo.at(2) == '0') &&
                            (codigo.at(3) == '1' || codigo.at(3) == '0') &&
                            (codigo.at(4) == '1' || codigo.at(4) == '0') &&
                            (codigo.at(5) == '1' || codigo.at(5) == '0') &&
                            (codigo.at(6) == '1' || codigo.at(6) == '0') &&
                            (codigo.at(7) == '1' || codigo.at(7) == '0'));
    if (sonochocifras && esnumbinario) {
        if (codigo.at(0) == '1') unos++;
        if (codigo.at(1) == '1') unos++;
        if (codigo.at(2) == '1') unos++;
        if (codigo.at(3) == '1') unos++;
 
        if (codigo.at(4) == '0') ceros++;
        if (codigo.at(5) == '0') ceros++;
        if (codigo.at(6) == '0') ceros++;
        if (codigo.at(7) == '0') ceros++;
 
        if (unos == ceros) codigoCorrecto = true;
    }
 
    if (codigoCorrecto) {
        cout << "\nIngrese datos del contacto:\n";
        cout << "Nombre   = ";
        cin >> nombre;
        cout << "Apellido = ";
        cin >> apellido;
        cout << "Telefono = ";
        cin >> telefono;
        cout << "Celular  = ";
        cin >> celular;
        cout << "Correo electronico   = ";
        cin >> correo;
        cout << "Ciudad   = ";
        cin >> ciudad;
        cout << "Pais     = ";
        cin >> pais;
        if (pais != "Panama") {
            cout << "\nSolo se admiten contactos de Panama";
        }
    } else {
        cout << "\nEl codigo de verificacion es incorrecto";
    }
}
