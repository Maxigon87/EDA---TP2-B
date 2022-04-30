#include <iostream>
#include <stdio.h>

using namespace std;

struct empleado
{
    char nombre[20];
    char sexo[20];
    float sueldo;
}empleados[100];

int main()
{
    float mayor=0,menor = 99999999;
    int N, mayS=0,menS=0;
    cout << "Empresa S.A"<<endl;
    cout << "***************************************************"<<endl;
    cout << "Ingrese la cantidad de empleados de esta empresa: ";
    
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        fflush(stdin);
        cout << "Ingrese los datos del empleado." << endl;
        
        cout << "Nombre: ";
        cin.getline(empleados[i].nombre,20,'\n');
        cout <<"Sexo: ";
        cin.getline(empleados[i].sexo,20,'\n');
        cout << "Sueldo: " << endl;
        cin >> empleados[i].sueldo;
        cout<<endl;
    
       if(empleados[i].sueldo > mayor){
           mayor = empleados[i].sueldo;
           mayS = i;
       }
       if(empleados[i].sueldo < menor){
           menor = empleados[i].sueldo;
           menS = i;
       }
       cout<<endl;
    }
    cout<<"El empleado con mayor salario es: "<<endl;
    cout<<"Nombre: "<< empleados[mayS].nombre<<endl;
    cout<<"Sueldo: "<< empleados[mayS].sueldo<<endl;
    cout<<" "<<endl;

    cout<<"El empleado con menor salario es: "<<endl;
    cout<<"Nombre: "<< empleados[menS].nombre<<endl;
    cout<<"Sueldo: "<< empleados[menS].sueldo<<endl;
    cout<<endl;
    return 0;
}
