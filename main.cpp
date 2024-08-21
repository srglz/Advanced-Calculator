#include <iostream>
#include "cyp.h"
#include "cypr.h"
#include <windows.h>
using namespace std;

int main(){

    double a, b, c, d, f, g, h, r;
    int selector;
    double PI = 3.14;

    do
    {
        cout << " " << endl << " -------- Advanced Calculator --------" << endl
        << " " << endl << " Por favor, seleccione que recurso desea ocupar. "
        << endl << " " << endl << " " << "1. Area de triangulo"  << endl << " " <<
        "2. Area de un circulo" << endl << " " << "3. Proximamente" << endl << " " <<
        "4. Proximamente" << endl << " " << "5. Proximamente" << endl << " " << 
        "6. Proximamente" << endl << " " << "7. Proximamente" << endl << " " <<
        "8. Salir del programa" << endl << " " << endl;
        cin >> selector;
        
        switch (selector)
        {
        case 1:
            system("cls");
            cout << " " << endl << "  Ingrese su base: " << endl;
            cin >> a;

            system("cls");
            cout << " " << endl << " Altura seleccionada: " << a << endl << " " << endl;

            cout << "  Ingrese su altura: " << endl;
            cin >> b;
            system("cls");
            r = (a*b)/2;
            
            cout << " " << endl << " Altura seleccionada: " << a << endl << " " << endl;

            cout << " Base seleccionada: " << b << endl << " " << endl;

            cout << "  Su respuesta es: " << r << endl << " " << endl;

            cyp(r);
            
            cout << " Su respuesta ha sido copiada en el portapapeles!" << endl << " "
            << endl << " Presione ENTER para poder volver al menu. " << endl << " ";

            cin.get();
            cin.ignore();

            system("cls");
            break;
        case 2:
            int response;

            system("cls");
            cout  << " " << endl << "  Deseas contabilizar PI como 3,14. " << "(Si = 1 / No = 2)" << endl << " " << endl;
            cin >> response;
            switch (response)
            {
            case 1:
            system("cls");
            cout << " " << endl << "  Ingrese su radio: " << endl;
            cin >> a;
            system("cls");

            r = PI*(a*a);

            cout << " " << endl << " Radio seleccionada: " << a << endl << " " << endl;

            cout << "  Su respuesta es: " << r << endl << " " << endl;

            cyp(r);
            
            cout << " Su respuesta ha sido copiada en el portapapeles!" << endl << " "
            << endl << " Presione ENTER para poder volver al menu. " << endl << " ";

            cin.get();
            cin.ignore();

            system("cls");
                break;
            case 2:
                system("cls");
            cout << " " << endl << "  Ingrese su radio: " << endl;
            cin >> a;
            system("cls");

            r = (a*a);

            cout << " " << endl << " Radio seleccionada: " << a << endl << " " << endl;

            cout << "  Su respuesta es: " << r << " " << "Pi" << endl << " " << endl;

            cypr(r);
            
            cout << " Su respuesta ha sido copiada en el portapapeles!" << endl << " "
            << endl << " Presione ENTER para poder volver al menu. " << endl << " ";

            cin.get();
            cin.ignore();

            system("cls");
                break;
            default:
                break;
            }
            
            break;
        case 8:
            cout << " " << endl << "Cerrando el programa...";
            break;
        default:
            cout << "Vuelve a intentarlo, error en el programa o respuesta inexistente.";
            break;
        }



    } while (selector != 8);
    

    return 0;
}
