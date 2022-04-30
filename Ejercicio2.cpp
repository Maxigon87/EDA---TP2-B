/*Ejercicio 2:
Cree una estructura profesor, con nombre, cargo, materia, y carga horaria. 
Declare 2 profesores con estos valores (fuera del main): 
Ej: Profe. Cristina, Titular, Gestión de datos, 20hs. 
Ej2: Fabiana. Jefa TP, Matemática, 15hs. 
Luego en el main, muestre ambos profesores concatenados 
a sus materias. 
Sugerencia getline para los char[].*/

#include <iostream>
#include <conio.h>
using namespace std;
struct Profesor {
	char nombre[50];
	char cargo[50];
	char materia[50];
	int cargaHoraria;
}profesor[2];
 
int main() {
	int i=0;
	char opcion;
	do {
		system("cls");
		cout<<"Ingrese los datos del profesor: "<<endl;
		cout<<"********************************"<<endl;
		fflush(stdin);
		cout<<"Nombre: ";
		cin.getline(profesor[i].nombre,50,'\n');
		cout<<"Cargo: ";
		cin.getline(profesor[i].cargo,50,'\n');
		cout<<"Materia: ";
		cin.getline(profesor[i].materia,50,'\n');
		cout<<"Carga Horaria: "; cin>>profesor[i].cargaHoraria;
		i++;
		
		if(i!=2) {
			cout<<"\nSeguir ingresando escriba 's' , terminar 'otra tecla': ";cin>>opcion;	
		} else 
			cout<<"\n";
	
	} while((opcion=='s'||opcion=='S') && i<2 );
	
	for(int j=0;j<i;j++) {
		cout<<"\nDatos del Profesor"<<endl;
		cout<<"*********************"<<endl;
		cout<<"Nombre: "<<profesor[j].nombre<<endl;
		cout<<"Cargo: "<<profesor[j].cargo<<endl;
		cout<<"Materia: "<<profesor[j].materia<<endl;
		cout<<"Carga horaria: "<<profesor[j].cargaHoraria<<endl;
	}
	
	getch();
	return 0;
}
