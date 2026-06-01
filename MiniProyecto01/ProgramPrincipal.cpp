// PROGRAMA PRINCIPAL

#include <iostream>

using namespace std;

void MenuOpciones(string nombreArchivo);

int main()
{
    MenuOpciones("");
    return 0;
}

void MenuOpciones(string nombreArchivo)
{
    string nombreBuscar;
    int opcion = 0;
    do
    {
        system("cls");
        cout << "MENU DE OPCIONES" << endl;
        cout << "================" << endl;
        cout << "1. Adicionar Persona" << endl;
        cout << "2. Reporte Personas" << endl;
        cout << "3. Buscar datos Persona" << endl;
        cout << "4. Modificar datos Persona" << endl;
        cout << "5. Eliminar datos Persona" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione la opcion: ";
        cin >> opcion;
        system("cls");
        switch (opcion)
        {
            case 1:
                cout << "Opcion 1";
                system("pause");
                break;
            case 2:
                cout << "Opcion 2";
                system("pause");
                break;
            case 3:
                cout << "Opcion 3";
                system("pause");
                break;
            case 4:
                cout << "Opcion 4";    
                system("pause");
                break;
            case 5:
                cout << "Opcion 5";    
                system("pause");
                break;
            default:
                if (opcion != 0)
                {
                    cout << "Debe ingresar una opcion valida." << endl;
                    system("pause");
                }
                break;
        }
    } while (opcion != 0);
    system("cls");
    cout << "SE HA SALIDO DEL MENU" << endl;
}