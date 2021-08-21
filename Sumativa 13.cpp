#include <iostream>
#include <string>
#include <cctype>
 
int main()
{
    std::string nombre;
    float apertura, cantidad, deposito = 0, retiro = 0, balance;
    char opcion;
 
    std::cout << "Nombre: "; std::getline(std::cin, nombre);
    std::cout << "Cantidad Apertura: "; std::cin >> apertura;
    balance = apertura;
 
    std::cout << "\nContinuar (S/n): "; std::cin >> opcion;
    opcion = toupper(opcion);
 
    if (opcion != 'S') return 0;
 
    do {
        std::cout << "\n1.- Deposito \n2.- Retiro" << std::endl;
        std::cin >> opcion;
 
        if (opcion == '1')
        {
            std::cout << "\nCantidad Deposito: ";
            std::cin >> cantidad;
            deposito += cantidad;
            balance += cantidad;
        }
        else if (opcion == '2')
        {
            do {
                std::cout << "\nCantidad Retiro: ";
                std::cin >> cantidad;
 
                if (cantidad > balance)
                    std::cout << "\n\nLa Cantidad Supera el Balance" << std::endl;
 
            } while (cantidad > balance);
 
            retiro += cantidad;
            balance -= cantidad;
        }
        else
            std::cout << "\n\nOPCION NO VALIDA" << std::endl;
 
        std::cout << "\nContinuar (S/n): "; std::cin >> opcion;
        opcion = toupper(opcion);
 
    } while (opcion == 'S');
 
    std::cout << std::endl;
    std::cout << "Nombre:          " << nombre   << std::endl;
    std::cout << "Apertura Cuenta: " << apertura << std::endl;
    std::cout << "Total Depositos: " << deposito << std::endl;
    std::cout << "Toal Retiros:    " << retiro   << std::endl;
    std::cout << "Balance Final:   " << balance  << std::endl;
 
    return 0;
}
