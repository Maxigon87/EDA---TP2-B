#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

struct infoDireccion
{
    char calle[20];
    char ciudad[10];
    char provincia[10];
};

struct empleado
{
    char nombre[10];
    struct infoDireccion dirEmpleado;
    double salario;
}empleados[2];

int main()
{
    for (int i = 0; i < 2; i++)
    {
        fflush(stdin);
        cout << "Digite su nombre: ";
        cin.getline(empleados[i].nombre, 10, '\n');
        cout << "Ingrese su direccion: ";
        cin.getline(empleados[i].dirEmpleado.calle, 20, '\n');
        cout << "Ingrese su ciudad: ";
        cin.getline(empleados[i].dirEmpleado.ciudad, 10, '\n');
        cout << "Ingrese su provincia: ";
        cin.getline(empleados[i].dirEmpleado.provincia, 10, '\n');
        cout << " Ingrese su salario: ";
        cin >> empleados[i].salario;
        cout << "\n";
    }

    for (int i = 0; i < 2; i++)
    {
        cout<<"Nombre de los empleados: "<<empleados[i].nombre<<endl;
        cout<<"Direccion de los empleados: "<<empleados[i].dirEmpleado.calle<<endl;
        cout<<"Ciudad de los empleados: "<<empleados[i].dirEmpleado.ciudad<<endl;
        cout<<"Provincia de los empleados: "<<empleados[i].dirEmpleado.provincia<<endl;
        cout<<"Salario de los empleados: "<<empleados[i].salario;
    }
    
}
