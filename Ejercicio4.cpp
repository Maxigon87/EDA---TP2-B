/*
Ejercicio 4: 
Hacer estructuras anidadas para registrar los datos de un Trabajador y de una Persona sin
oficio. Se guarda de las personas nombre, edad, peso, y fecha (estructura con dia, mes, anio).
Un Trabajador es una estructura que guarda una persona, y un salario. Declare e inicialice un
ejemplo de Trabajador y Persona.
*/
#include <iostream>
#include <conio.h>
using namespace std;

struct Fecha {
	int dia;
	int mes;
	int anio;
};

struct Persona {
	char nombre[50];
	double peso;
	struct Fecha fecha;
}persona1;

struct Trabajador {
	struct Persona persona;
	double salario;
	
}trabajador1;

int main() {
	char opcion;
	int cont=0;
	
	do {
		fflush(stdin);
		system("cls");
		
		cout<<"Ingrese Datos de Persona"<<endl;
		cout<<"***************************"<<endl;
		cout<<"Nombre: ";
		cin.getline(persona1.nombre,50,'\n');
		cout<<"Peso: ";cin>>persona1.peso;
		cout<<"Fecha de Nacimiento"<<endl;
		cout<<"Dia: ";cin>>persona1.fecha.dia;
		cout<<"Mes: ";cin>>persona1.fecha.mes;
		cout<<"Anio: ";cin>>persona1.fecha.anio;
		
		cout<<"\nIngrese Datos de Trabajador"<<endl;
		cout<<"***************************"<<endl;
		fflush(stdin);
		cout<<"Nombre: ";
		cin.getline(trabajador1.persona.nombre,50,'\n');
		cout<<"Peso: ";cin>>trabajador1.persona.peso;
		cout<<"Fecha de Nacimiento "<<endl;
		cout<<"Dia: ";cin>>trabajador1.persona.fecha.dia;
		cout<<"Mes: ";cin>>trabajador1.persona.fecha.mes;
		cout<<"Anio: ";cin>>trabajador1.persona.fecha.anio;
		cout<< "Salario: "; cin>>trabajador1.salario;
		cont++;
		
		cout<<"Desea ingresar otra persona: presione s, cualquier tecla para salir.";cin>>opcion;
	} while(opcion=='S' || opcion=='s');
	
	for(int j=0;j<cont;j++) {
		cout<<"\nPersona Ingresada"<<endl;
		cout<<"Nombre:"<<persona1.nombre<<endl;		
		cout<<"Peso:"<<persona1.peso<<endl;		
		cout<<"Fecha de Nacimiento: "<<persona1.fecha.anio<<"/"<<persona1.fecha.mes<<"/"<<persona1.fecha.dia<<endl;
		
		cout<<"\nTrabajador Ingresado: "<<endl;
		cout<<"Nombre: "<<trabajador1.persona.nombre<<endl;
		cout<<"Peso: "<<trabajador1.persona.peso<<endl;
		cout<<"Fecha de Nacimiento: "<<trabajador1.persona.fecha.anio<<"/"<<trabajador1.persona.fecha.mes<<"/"<<trabajador1.persona.fecha.dia<<endl;
		cout<<"Salario: "<<trabajador1.salario;
	}
	
	
	
	
	getch();
	return 0;
}

